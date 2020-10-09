#include <iostream>
#include <fstream>
#include "header/headerfile.h"
using namespace std;


int baseClass::getDataX()
{
    return dataX;
}

int baseClass::getDataY()
{
    return dataY;
}

void baseClass::setDataX(int data)
{
    if(data != dataX){
        dataX = data;
        emit dataXChanged();
    }
}

void baseClass::setDataY(int data)
{
    if(data != dataY){
        dataY = data;
        emit dataYChanged();
    }
}
