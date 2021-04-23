#include "BranchFractal.h"

BranchFractal::BranchFractal(int levels) {
    this->n = levels;
}

void BranchFractal::draw()
{
    drawMode(length,n,x,y,d);
}

void BranchFractal::drawMode(int length, int n, int x, int y, int d) {
    if(n != 0){
        int middleY = y-length;
        int leftBranchX = x -length*cos(PI/180*d);
        int leftBranchY = middleY -length*sin(PI/180*d);
        int rightBranchX = x +length*cos(PI/180*d);
        int rightBranchY = middleY -length*sin(PI/180*d);

        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        ofDrawLine(x, y, x,y-length);
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        ofDrawLine(x, y-length, rightBranchX, rightBranchY);
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
        ofDrawLine(x,y-length, leftBranchX, leftBranchY);

        drawMode(length/2, n-1,rightBranchX,rightBranchY, 30);
        drawMode(length/2,n-1,leftBranchX,leftBranchY, 30);
    }
}

void BranchFractal::setActivate(bool a)
{
    activate = a;
}

bool BranchFractal::getActivate()
{
    return activate;
}

void BranchFractal::setN(int n1)
{
    n = n1;
}
