#pragma once
#include "FractalMode.h"


class CircleFractal : public FractalMode {
    private:
    int x = ofGetWidth()/2;
    int y = ofGetHeight()/2;
    int n = 0;
    bool activate = true;

    public:

    CircleFractal(int);
    void draw(); 
    void setActivate(bool a);  
    bool getActivate();
    void drawMode(int,int,int);


    int getX(); 
    int getY();
    int getN();

    void setX(int x);
    void setY(int y);
    void setN(int n);


};