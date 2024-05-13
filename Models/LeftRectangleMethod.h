#ifndef LEFTRECTANGLEMETHOD_H
#define LEFTRECTANGLEMETHOD_H
#include "Models/BasisForMethods.h"
class LeftRectangleMethod: public BasisFormethods{
public:
    float Calculate(float a,float b, int n){
        float h = (b - a) / n;
        float sum = 0;
        for(int i = 0; i <= n - 1; i++){
            sum += h * Function(a + i * h);
        }
        return sum;
    }
};

#endif // LEFTRECTANGLEMETHOD_H
