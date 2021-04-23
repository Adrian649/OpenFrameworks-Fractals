#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleFractal = new CircleFractal(levels);
    branchFractal = new BranchFractal(levels);
    sierpinskiFractal = new SierpinskiFractal(levels);
    modes.push_back(circleFractal);
    modes.push_back(branchFractal);
    modes.push_back(sierpinskiFractal);
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
}

//--------------------------------------------------------------
void ofApp::draw(){
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if(modes[0]->getActivate()){
        modes[0]->draw();
    }if(modes[1]->getActivate()){
        modes[1]->draw();
    }if(modes[2]->getActivate()) {
        modes[2]->draw();
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
            //mode = '4';
           // break;
        case '=':
            if (levels < 11) {
                levels++;
            }
            break;
        case '-':
            if (levels > 0) {
                levels--;
            }
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