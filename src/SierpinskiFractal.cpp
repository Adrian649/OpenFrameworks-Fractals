#include "SierpinskiFractal.h"

SierpinskiFractal::SierpinskiFractal(int levels) {
    this->n = levels;
}

void SierpinskiFractal::draw()
{
    drawMode(x,y,size,n);
}

void SierpinskiFractal::drawMode(int x, int y, int size, int n) {
    if(n == 0) {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    ofDrawTriangle(a, b, c);

    drawMode(x, y, size / 2, n - 1);
    drawMode((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
}

void SierpinskiFractal::setActivate(bool a)
{
    activate = a;
}

bool SierpinskiFractal::getActivate()
{
    return activate;
}

void SierpinskiFractal::setN(int n1)
{
    n = n1;
}
