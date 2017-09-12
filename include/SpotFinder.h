#ifndef SPOTFINDER_H
#define SPOTFINDER_H

#include "SpotExtractorFromData.h"
//#include "AgileMap.h"
#include "MathUtils.h"
#include "FileWriter.h"

class SpotFinder
{
    public:
        SpotFinder(double l, double b, string dataSetPath);
        void startAnalysis();
        vector<Spot> filterSpotsByDistance(vector<Spot> spots);
    protected:

    private:
        double theSpot_L;
        double theSpot_B;
        string dataSetPath;
        double degreeError;
       // AgileMap* agileMapUtils;


};

#endif // SPOTFINDER_H
