#ifndef SPOT_H
#define SPOT_H

#include <string>
using namespace std;

class Spot
{
    public:
        Spot(string classificationLabel, double l, double b, double confidence, string dateUTC, string dateTT , string fileName, string classificationThreshold);


        string toString();

        inline double getL(){
            return l;
        }
        inline double getB(){
            return b;
        }
        inline float getDistanceFromTheSpot() {
            return distanceFromTheSpot;
        }
        inline void setDistanceFromTheSpot(float d) {
            distanceFromTheSpot = d;
        }
    protected:

    private:
        string classificationLabel;
        double l;
        double b;
        double confidence;
        string dateUTC;
        string dateTT;
        string fileName;
        string classificationThreshold;
        float distanceFromTheSpot;

};

#endif // SPOT_H
