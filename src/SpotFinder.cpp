#include "SpotFinder.h"

SpotFinder::SpotFinder(double l, double b, string _dataSetPath)
{
   theSpot_L = l;
   theSpot_B = b;
   dataSetPath = _dataSetPath;
   degreeError = 10;
   //agileMapUtils = new AgileMap("imageForAgileMap.cts");
}

void SpotFinder::startAnalysis(){

    vector<Spot> spots = SpotExtractorFromData::extractSpotsFromDataSet(dataSetPath);

    spots = filterSpotsByDistance(spots);

    string output = "";
    int index = 1;
    for(vector<Spot>::iterator it = spots.begin(); it!=spots.end(); ++it){
        Spot s = *it;
        output+= to_string(index)+", "+to_string(s.getDistanceFromTheSpot())+", "+s.toString()+"\n";
        index++;
    }
    FileWriter::write2File("ANALYSIS_LOG",output);
}

vector<Spot> SpotFinder::filterSpotsByDistance(vector<Spot> spots){

    vector<Spot> closeSpotsFromTheSpot;

    for(vector<Spot>::iterator it = spots.begin(); it!=spots.end(); ++it){
        Spot s = *it;

        s.setDistanceFromTheSpot( MathUtils::sphericalDistanceDeg(s.getL(),s.getB(),theSpot_L,theSpot_B) );

        if(s.getDistanceFromTheSpot() <= degreeError){
            closeSpotsFromTheSpot.push_back(s);
        }

    }


    return closeSpotsFromTheSpot;
}

