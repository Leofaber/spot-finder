#ifndef SPOTEXTRACTORFROMDATA_H
#define SPOTEXTRACTORFROMDATA_H

#include <vector>
#include <fstream>
#include <sstream>
#include "Spot.h"

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class SpotExtractorFromData
{
    public:
        static vector<Spot> extractSpotsFromDataSet(string dataSetPath);

    protected:

    private:
        SpotExtractorFromData();
};

#endif // SPOTEXTRACTORFROMDATA_H
