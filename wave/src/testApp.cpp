#include "testApp.h"
#include "ofMath.h"

float theta = 0.0;
//--------------------------------------------------------------
void testApp::setup(){
ofSetVerticalSync(true);
ofSetCircleResolution(20);
ofSetColor(0);
ofBackground(255);
ofSetFrameRate(30);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
theta +=0.02;
float x = theta;

for(int i = 0; i < 20; i++)
{
    float y = sin(x)*ofGetHeight()/2;
    ofFill();
    ofEllipse(i*50, y + ofGetHeight()/2, 16,16);
    x+=0.2;
}
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
