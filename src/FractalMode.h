#pragma once
#include "ofMain.h"

class FractalMode {
    public:
        virtual void draw() = 0;
        virtual void setActivate(bool a) = 0; 
        virtual bool getActivate() = 0;
        virtual void setN(int n1) = 0;
};