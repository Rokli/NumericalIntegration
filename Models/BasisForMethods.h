#ifndef BASISFORMETHODS_H
#define BASISFORMETHODS_H
#include <QString>
class BasisFormethods{
public:
    QString name;
    virtual float Calculate(float a,float b, int n) = 0;
    virtual void SetName() = 0;
    float Function(float x){
        return (1+ sqrt(x))/(1+4*x + 3 * pow(x,2));
    }
};

#endif // BASISFORMETHODS_H
