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
    static BasisFormethods* ChangeMethod(int index){
        BasisFormethods* method;
        switch(index){
        case 0:
            method = SimpleFactory::CreateLeftMethod();
            break;
        case 1:
            method = SimpleFactory::CreateRectangleMethod();
            break;
        default:
            break;
        }
        return method;
    }
};

#endif // SIMPLEFACTORY_H
