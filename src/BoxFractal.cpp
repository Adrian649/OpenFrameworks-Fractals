#include "BoxFractal.h"

BoxFractal::BoxFractal(int levels) {
    this->n = levels;
}

void BoxFractal::draw()
{
    drawMode(x,y,z,size,n);
}

void BoxFractal::drawMode(int x, int y, int z, int size, int n) {
    if(n == 0) {
        return;
    }

    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2),z + ((sqrt(3) * size) / 2) );

    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    ofDrawBox(c,300);
    drawMode(x,y,z-25,size,n-1);
    drawMode(x,y,z-15,size,n-1);
    drawMode(x,y,z-35,size,n-1);
    
}

void BoxFractal::setActivate(bool a)
{
    activate = a;
}

bool BoxFractal::getActivate()
{
    return activate;
}

void BoxFractal::setN(int n1)
{
    n = n1;
}