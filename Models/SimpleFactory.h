#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H
#include "Models/AverageRectangleMethod.h"
#include "Models/LeftRectangleMethod.h"
class SimpleFactory{
public:
    AverageRectangleMethod* CreateRectangleMethod(){
        return new AverageRectangleMethod;
    }
    LeftRectangleMethod* CreateLeftMethod(){
        return new LeftRectangleMethod;
    }
};

#endif // SIMPLEFACTORY_H
