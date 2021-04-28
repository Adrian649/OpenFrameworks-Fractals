#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(8);
    circleFractal = new CircleFractal(levels);
    branchFractal = new BranchFractal(levels);
    sierpinskiFractal = new SierpinskiFractal(levels);
    ellipsefractal = new EllipseFractal(levels);
    boxFractal = new BoxFractal(levels);
    modes.push_back(circleFractal);
    modes.push_back(branchFractal);
    modes.push_back(sierpinskiFractal);
    modes.push_back(ellipsefractal);
    modes.push_back(boxFractal);
}

//--------------------------------------------------------------
void ofApp::update(){
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0,0,0);
    if (modes[0]->getActivate() == true) {
        modes[0]->setN(levels);
    }
    if (modes[1]->getActivate() == true) {
        modes[1]->setN(levels);
    }
    if (modes[2]->getActivate() == true) {
        modes[2]->setN(levels);
    }
    if (modes[3]->getActivate() == true) {
        modes[3]->setN(levels);
    }
    if (modes[4]->getActivate() == true) {
        modes[4]->setN(levels);
    }
    if (isReplaying) {
        if (counter >= 30) {
            levels++;
            counter = 0;
        }
        if (levels == 8) {
            isReplaying = false;
            counter = 0;
        }
    }
    counter++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if (modes[0]->getActivate()){
        modes[0]->draw();
    }if (modes[1]->getActivate()){
        modes[1]->draw();
    }if (modes[2]->getActivate()) {
        modes[2]->draw();
    }if (modes[3]->getActivate()) {
        modes[3]->draw();
    }if (modes[4]->getActivate()) {
        modes[4]->draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // This method is called automatically when any key is pressed
    switch(key){
        case '1':
            modes[0]->setActivate(!modes[0]->getActivate());
            break;
        case '2':
            modes[1]->setActivate(!modes[1]->getActivate());
            break;
        case '3':
            modes[2]->setActivate(!modes[2]->getActivate());
            break;
        case '4':
            modes[3]->setActivate(!modes[3]->getActivate());
            break;
        case '5':
            modes[4]->setActivate(!modes[4]->getActivate());
            break;
        case '=':
            if (levels < 11) {
                levels++;
            }
            break;
        case '-':
            if (levels > 0) {
                levels--;
            }
            break;
        case ' ':
            isReplaying = true;
            levels = 0;
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}