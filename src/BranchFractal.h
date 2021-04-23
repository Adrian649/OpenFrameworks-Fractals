#pragma once
#include "FractalMode.h"


class BranchFractal : public FractalMode {
    private:
    int length = 200;
    int x = ofGetWidth()/2;
    int y = ofGetHeight()-50;
    int n = 0;
    int d = 30;
    bool activate = false;

    public:

    BranchFractal(int);
    void draw(); 
    void setActivate(bool a);  
    bool getActivate();
    void drawMode(int,int,int,int,int);

    void setN(int n);


};