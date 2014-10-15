#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
ofBackground(255);
ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
float red_prob = 0.60;
float green_prob = 0.10;
float blue_prob = 0.30;

float num = ofRandomf(); //random value 0 - 1
ofColor col;
if(num < red_prob)
{
    col = ofColor::red;
    //if the number is less .6
} else if(num <green_prob + red_prob)
{
    col = ofColor::green;
    //if it's between .6 and .7
}else
{
    col = ofColor::blue;
}
ofSetColor(col);
ofFill();
ofEllipse(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 64, 64);
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
