#pragma once
#include<cmath>
#include "ofMain.h"
#include "FractalMode.h"
#include "CircleFractal.h"
#include "BranchFractal.h"
#include "SierpinskiFractal.h"
#include "EllipseFractal.h"
#include "BoxFractal.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void drawMode3(float x, float y, float size, int n);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	private:
		bool addMode1 = true;
		bool addMode2 = false;
		bool addMode3 = false;
		bool toggle = false;
		int counter = 0;
		bool isReplaying = false;
		vector<FractalMode*> modes;
		int levels = 4;

		CircleFractal *circleFractal;
		BranchFractal *branchFractal;
		SierpinskiFractal *sierpinskiFractal;
		EllipseFractal *ellipsefractal;
		BoxFractal *boxFractal;
};