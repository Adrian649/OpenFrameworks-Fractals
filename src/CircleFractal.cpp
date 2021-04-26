#include "CircleFractal.h"

CircleFractal::CircleFractal(int levels) {
    this->n = levels;
}

void CircleFractal::draw()
{
    drawMode(x,y,n,radius);
}

void CircleFractal::drawMode(int x, int y, int n, float r) {
    if (n != 0)
    {
        ofSetFrameRate(8);
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        ofDrawCircle(x, y, r);
        drawMode(x + r, y, n - 1, r/1.8);
        drawMode(x - r, y, n - 1, r/1.8);
        drawMode(x, y + r, n - 1, r/1.8);
        drawMode(x, y - r, n - 1, r/1.8);
    }
}

void CircleFractal::setActivate(bool a)
{
    activate = a;
}

bool CircleFractal::getActivate()
{
    return activate;
}

void CircleFractal::setN(int n1)
{
    n = n1;
}
