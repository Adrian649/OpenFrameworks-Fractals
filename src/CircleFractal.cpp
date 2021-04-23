#include "CircleFractal.h"

CircleFractal::CircleFractal(int levels) {
    this->n = levels;
}

void CircleFractal::draw()
{
    drawMode(x,y,n);
}

void CircleFractal::drawMode(int x, int y, int n) {
    if (n != 0)
    {
        ofSetFrameRate(8);
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        ofDrawCircle(x, y, 100);
        drawMode(x + 100, y, n - 1);
        drawMode(x - 100, y, n - 1);
        drawMode(x, y + 100, n - 1);
        drawMode(x, y - 100, n - 1);
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
