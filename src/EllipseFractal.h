#pragma once
#include "FractalMode.h"


class EllipseFractal : public FractalMode {
    private:
    int x = ofGetWidth()/2;
    int y = ofGetHeight()/2;
    int n = 0;
    float width = 100;
    float height = ofGetHeight()/2;
    bool activate = false;

    public:

    EllipseFractal(int);
    void draw(); 
    void setActivate(bool a);  
    bool getActivate();
    void drawMode(int,int,float,float,int);

    void setN(int n);


};