#include "SpotFinder.h"

SpotFinder::SpotFinder(double l, double b, string _dataSetPath)
{
   theSpot_L = l;
   theSpot_B = b;
   dataSetPath = _dataSetPath;
   degreeError = 10;
   //agileMapUtils = new AgileMap("imageForAgileMap.cts");
}

vector<Spot> SpotFinder::findProbableSpots(){

    vector<Spot> spots = SpotExtractorFromData::extractSpotsFromDataSet(dataSetPath);
    vector<Spot> closeSpotsFromTheSpot;

    for(vector<Spot>::iterator it = spots.begin(); it!=spots.end(); ++it){
        Spot s = *it;
        cout << s.toString()<<endl;

        cout << s.getL() << " " << s.getB() << " " << theSpot_L << " " << theSpot_B << endl;
        cout << "Errore qua?" << endl;
        //float sphericalDistanceFromTheSpot = agileMapUtils->SrcDist(s.getL(),s.getB(),theSpot_L,theSpot_B);

        float sphericalDistanceFromTheSpot = MathUtils::sphericalDistanceDeg(s.getL(),s.getB(),theSpot_L,theSpot_B);
        cout << "Distanza dal NGC 4993: " << sphericalDistanceFromTheSpot <<endl;

        if(sphericalDistanceFromTheSpot <= degreeError){
            closeSpotsFromTheSpot.push_back(s);
        }

    }

    cout << "Gli spot vicini a NGC 4993 sono: " << endl;
    for(vector<Spot>::iterator it = closeSpotsFromTheSpot.begin(); it!=closeSpotsFromTheSpot.end(); ++it){
        Spot s = *it;
        cout << s.toString()<<"\n"<<endl;
    }

    return closeSpotsFromTheSpot;
}

