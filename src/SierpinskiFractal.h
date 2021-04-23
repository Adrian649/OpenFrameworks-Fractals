#pragma once
#include "FractalMode.h"


class SierpinskiFractal : public FractalMode {
    private:
    int size = ofGetHeight()/2;
    int x = ofGetWidth()/3;
    int y = 10;
    int n = 0;
    bool activate = false;

    public:

    SierpinskiFractal(int);
    void draw(); 
    void setActivate(bool a);  
    bool getActivate();
    void drawMode(int,int,int,int);

    void setN(int n);


};