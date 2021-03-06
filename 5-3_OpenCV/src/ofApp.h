#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

#include "ofxBox2d.h"
#include "CustomCircle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    ofVideoGrabber cam;
    ofxCvColorImage colorImg;
    
    ofxCvGrayscaleImage grayImg;
    
    ofxCvGrayscaleImage grayBg;
    ofxCvGrayscaleImage grayDiff;
    int threshold;
    
    
    bool isSave;

    
    ofxCvContourFinder contourFinder;
    
    
    ofxBox2d box2d; //box2dのインスタンス
    
    static const int BOLB_NUM = 10;
    
    ofPolyline edgeLines[BOLB_NUM];
    ofPtr<ofxBox2dPolygon> edges[BOLB_NUM];
    
    ofxBox2dCircle  circles[100];    // Box2dで使える円

    
    
};
