#include "testApp.h"

float angle = 0;
float aVelocity = 0.05;
float amplitude = 100;
ofColor col;

//--------------------------------------------------------------
void testApp::setup(){
ofBackground(255);
ofSetColor(0);
ofSetFrameRate(30);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
float x = amplitude *cos(angle);
angle += aVelocity;
col = ofColor::fromHsb(ofRandom(100,155),255,255, 60);
    ofSetColor(col);
ofSetLineWidth(1);
ofFill();
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
ofLine(0,0,x,0);
ofEllipse(x,0,20,20);
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
