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

                string pathToFile;
                string classification;
                string l;
                string b;
                string confidence;
                string date;

                iss >> pathToFile;
                iss >> classification;
                iss >> l;
                iss >> b;
                iss >> confidence;
                iss >> date;



              //  cout <<pathToFile <<endl;
             //   cout <<classification<<endl;
             //   cout <<l<<endl;
             //   cout <<b<<endl;
             //   cout <<confidence<<endl;
             //   cout <<date<<endl;

                spotsData.push_back(Spot( stod(l), stod(b), pathToFile, stod(confidence), date));

            }else{
                cout << "Line's empty" << endl;
            }
        }


    }else{
        cout << "can't open dataset" << endl;
    }

    return spotsData;
}
