#ifndef SPOT_H
#define SPOT_H

#include <string>
using namespace std;

class Spot
{
    public:
        Spot(double l, double b, string fileName, double confidence, string observationDate);
        double getL();
        double getB();
        string getFileName();
        string getObservationDate();
        double getConfidence();
        string toString();

    protected:

    private:
        double l;
        double b;
        string fileName;
        string observationDate;
        double confidence;
};

#endif // SPOT_H
