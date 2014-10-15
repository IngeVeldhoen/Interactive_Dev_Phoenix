#include "testApp.h"
float t = 0.0;
float inc = 0.1;
//--------------------------------------------------------------
void testApp::setup(){
ofSetVerticalSync(true);
ofBackground(255);
ofSetFrameRate(30);
ofSetCircleResolution(200);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
//get a noise value at "time"(t) and scale it acoording windowswidth
float n = ofNoise(t) *ofGetWidth();
t+=inc;
ofSetColor(0);
ofFill();
ofTriangle(ofGetWidth()/2, ofGetHeight()/2, 500, 500, n, n);
cout << n ;
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
