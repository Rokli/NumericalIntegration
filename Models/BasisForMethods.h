#ifndef BASISFORMETHODS_H
#define BASISFORMETHODS_H

class BasisFormethods{
public:
    float Function(float x){
        return (1+ sqrt(x))/(1+4*x + 3 * pow(x,2));
    }
}

#endif // BASISFORMETHODS_H
