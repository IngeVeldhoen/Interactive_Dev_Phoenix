#include "testApp.h"
#include "ofMath.h"

float amplitude = 100;
//distance from center of motion on eiher perode
float period = 120;
// in this example we can see that the amplitude is 100 and the period is two_pi ; the output of sine never rises above 1 or below -1 and every two_pi radians (360 degrees) vave pattern repeats
float angle = 0;
float aVelocity = 0;
float aAcceleration = 0.01;
//--------------------------------------------------------------
void testApp::setup(){
ofBackground(255);
ofSetColor(0);
ofSetCircleResolution(20);
ofSetFrameRate(30);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
float x = amplitude * cos(M_TWO_PI*ofGetFrameNum()/period);
float y = amplitude *sin(M_TWO_PI*ofGetFrameNum()/period);
//framecount divided by period tells us how many cycles ve've completed. will be at 1/2 at 60 frames and 1 full cycle at 120

ofPushMatrix();
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
ofSetLineWidth(1);
ofFill();
ofLine(0,0,x,y);
ofEllipse(x,y,20,20);
ofPopMatrix();

ofPushMatrix();
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
ofRotate(angle);
ofFill();
ofLine(-100,0,100,0);
ofEllipse(-100,0,8,8);
ofEllipse(100,0,8,8);
aVelocity+=aAcceleration;
angle+=aVelocity;
ofPopMatrix();
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
