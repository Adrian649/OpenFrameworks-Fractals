#include "EllipseFractal.h"

EllipseFractal::EllipseFractal(int levels)
{
    this->n = levels;
}

void EllipseFractal::draw()
{
    drawMode(x, y, width, height, n);
}

void EllipseFractal::drawMode(int x, int y, float w, float h, int n)
{
    if (n != 0) {
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        ofDrawEllipse(x,y,w,h);
        drawMode(x,y,w+50*cos(180),h+50*cos(180),n-1);
        drawMode(x,y,w-25*sin(-180),h-25*sin(-180),n-1);
    }
}

void EllipseFractal::setActivate(bool a)
{
    activate = a;
}

bool EllipseFractal::getActivate()
{
    return activate;
}

void EllipseFractal::setN(int n1)
{
    n = n1;
}