#include "Spot.h"

Spot::Spot(double _l, double _b, string _fileName, double _confidence, string _observationDate)
{
    l=_l;
    b=_b;
    fileName=_fileName;
    observationDate=_observationDate;
    confidence=_confidence;
}

Spot::~Spot()
{
    //dtor
}
