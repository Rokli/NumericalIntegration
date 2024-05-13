#ifndef AVERAGERECTANGLEMETHOD_H
#define AVERAGERECTANGLEMETHOD_H
#include "BasisForMethods.h"
class AverageRectangleMethod: public BasisFormethods{
public:
    float Calculate(float a,float b, int n){
        float h = (b - a) / n;
        float sum = 0;
        for(int i = 0; i <= n; i++){
            sum += h * Function(a + (i+0.5) * h);
        }
        return sum;
    }
    void SetName(){
        this->name = "Средние прямоугольники:";
    }
};
#endif // AVERAGERECTANGLEMETHOD_H
