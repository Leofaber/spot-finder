#include "Spot.h"

Spot::Spot(double _l, double _b, string _fileName, double _confidence, string _observationDate)
{
    l=_l;
    b=_b;
    fileName=_fileName;
    observationDate=_observationDate;
    confidence=_confidence;
}


string Spot::toString(){
    return fileName+" "+to_string(l)+" "+to_string(b)+" "+to_string(confidence)+" "+observationDate;
}

 double Spot::getL(){
            return l;
        }
        double Spot::getB(){
            return b;
        }
        string Spot::getFileName(){
            return fileName;
        }
        string Spot::getObservationDate(){
            return observationDate;
        }
        double Spot::getConfidence(){
            return confidence;
        }
