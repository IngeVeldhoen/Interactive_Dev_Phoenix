#include "testApp.h"
#include "ofMath.h"

float theta = 0.0;


//--------------------------------------------------------------
void testApp::setup(){
ofBackground(255);
ofSetFrameRate(60);
ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    // the output of the sin() fucntion oscillates smootly beween -1 and 1
float x = ofMap(sin(theta), -1,1,0,ofGetWidth());
//with each cycle, increment theta
theta += 0.05;
ofFill();
ofSetLineWidth(8);
ofLine(ofGetWidth()/2, 0, x, ofGetHeight()/2);
ofSetColor(0);
ofSetCircleResolution(10);

//ofEllipse(x, x, 30, 30);

if(x < 200)
{
    ofEllipse(x, 16, 16, 16);
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
