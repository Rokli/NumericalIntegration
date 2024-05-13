#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H
#include "Models/AverageRectangleMethod.h"
#include "Models/LeftRectangleMethod.h"
class SimpleFactory{
public:
    static AverageRectangleMethod* CreateRectangleMethod(){
        return new AverageRectangleMethod;
    }
    static LeftRectangleMethod* CreateLeftMethod(){
        return new LeftRectangleMethod;
    }
};

#endif // SIMPLEFACTORY_H
