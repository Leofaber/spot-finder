#include "SpotExtractorFromData.h"

SpotExtractorFromData::SpotExtractorFromData()
{
    //ctor
}



vector<Spot> SpotExtractorFromData::extractSpotsFromDataSet(string dataSetPath){

    vector<Spot> spotsData;

    ifstream infile;
    infile.open(dataSetPath.c_str());

    if(infile.is_open()){




        string line;
        while (getline(infile, line))
        {

            if(line.size()>80){

                cout << "Found data" <<endl;


                replace(line.begin(), line.end(), ',', ' ');


                istringstream iss(line);

                string index;
                string fileName;
                string classificationLabel;
                string l_gal;
                string b_gal;
                string confidence;
                string dateUTC;
                string dateTT;
                string classificationThreshold;



                iss >> index;
                iss >> classificationLabel;
                iss >> l_gal;
                iss >> b_gal;
                iss >> confidence;
                iss >> dateUTC;
                iss >> dateTT;
                iss >> fileName;
                iss >> classificationThreshold;

                //   cout <<pathToFile <<endl;
                //   cout <<classification<<endl;
                //   cout <<l<<endl;
                //   cout <<b<<endl;
                //   cout <<confidence<<endl;
                //   cout <<date<<endl;

                spotsData.push_back(Spot(classificationLabel, stod(l_gal), stod(b_gal), stod(confidence), dateUTC, dateTT, fileName, classificationThreshold));

            }else{
               // cout << "Line's empty" << endl;
            }
        }


    }else{
        cout << "can't open dataset" << endl;
    }

    return spotsData;
}
