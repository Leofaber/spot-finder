#ifndef SPOTFINDER_H
#define SPOTFINDER_H

#include "SpotExtractorFromData.h"
//#include "AgileMap.h"
#include "MathUtils.h"

class SpotFinder
{
    public:
        SpotFinder(double l, double b, string dataSetPath);
        vector<Spot> findProbableSpots();
    protected:

    private:
        double theSpot_L;
        double theSpot_B;
        string dataSetPath;
        double degreeError;
       // AgileMap* agileMapUtils;


};

#endif // SPOTFINDER_H
