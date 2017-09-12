// GIT ADDRESS
// https://github.com/Leofaber/SpotFinder

#include<iostream>
#include "SpotFinder.h"

using namespace std;

int main(int argc, char*argv[]){

    if( argc > 1) {

        string datasetPath = (string)argv[1];
        //double spatialErrorMean = stod(argv[2],null);
        //double spatialErrorVariance = stod(argv[3],null);

        double l = 308.377257;
        double b = 39.293747;



        SpotFinder sf = SpotFinder(l,b,datasetPath);

        sf.startAnalysis();

    }
    else if(argc < 2) {
        cout << "Too few arguments supplied.\n  -the dataset\n   -the error mean\n   -the error variance" << endl;

    }
    else if( argc > 2 ) {
        cout << "Too many arguments supplied.\n  -the dataset\n   -the error mean\n   -the error variance" << endl;
    }
    return 0;

}

