// GIT ADDRESS
// https://github.com/Leofaber/SpotFinder

#include<iostream>
#include "SpotFinder.h"

using namespace std;

int main(int argc, char*argv[]){

    if( /*argc > 3*/true) {

        //string datasetPath = (string)argv[0];
        //double spatialErrorMean = stod(argv[1],null);
        //double spatialErrorVariance = stod(argv[2],null);

        double l = 308.377257;
        double b = 39.293747;

        string datasetPath = "Results_sources";

        SpotFinder sf = SpotFinder(l,b,datasetPath);

        sf.findProbableSpots();

    }
    else if( argc > 2 ) {
        cout << "Too many arguments supplied.\n  -the dataset\n   -the error mean\n   -the error variance" << endl;
    }
    return 0;

}

