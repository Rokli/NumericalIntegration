#include "basisformethods.h"
#include <cmath>
BasisForMethods::BasisForMethods() {}

BasisForMethods::Function(float x){
    // return (1+ sqrt(x))/(1+4*x + 3 * pow(x,2));
    return x;
}
