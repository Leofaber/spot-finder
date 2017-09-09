#ifndef SPOT_H
#define SPOT_H

#include <string>
using namespace std;

class Spot
{
    public:
        Spot(double l, double b, string fileName, double confidence, string observationDate);
        virtual ~Spot();

        double getL(){
            return l;
        }
        double getB(){
            return b;
        }
        string getFileName(){
            return fileName;
        }
        string getObservationDate(){
            return observationDate;
        }
        double getConfidence(){
            return confidence;
        }
        string toString(){
            return fileName+" "+to_string(l)+" "+to_string(b)+" "+to_string(confidence)+" "+observationDate;
        }
    protected:

    private:
        double l;
        double b;
        string fileName;
        string observationDate;
        double confidence;
};

#endif // SPOT_H
