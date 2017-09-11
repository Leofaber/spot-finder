#ifndef MATHUTILS_H
#define MATHUTILS_H

#include <math.h>

const double RAD2DEG = 180.0 / M_PI;
const double DEG2RAD = M_PI/180.0;

class MathUtils
{
    public:

        static double sphericalDistanceDeg(double l1, double b1, double l2, double b2);

    protected:

    private:
        MathUtils();
};

#endif // MATHUTILS_H
