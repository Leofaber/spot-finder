#include "Spot.h"

Spot::Spot(string _classificationLabel, double _l, double _b, double _confidence, string _dateUTC, string _dateTT , string _fileName, string _classificationThreshold)
{

    classificationLabel = _classificationLabel;
    l=_l;
    b=_b;
    fileName=_fileName;
    confidence=_confidence;
    dateUTC = _dateUTC;
    dateTT = _dateTT;
    fileName = _fileName;
    classificationThreshold = _classificationThreshold;

}


string Spot::toString(){
    return classificationLabel+", "+to_string(l)+", "+to_string(b)+", "+to_string(confidence)+", "+dateUTC+", "+dateTT+", "+classificationThreshold;
}

