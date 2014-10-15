#include "testApp.h"

int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void testApp::setup(){
ofSetFrameRate(60);
myCircleX = 300;
myCircleY = 200;
}

//--------------------------------------------------------------
void testApp::update(){
    myCircleX += 4;
if(myCircleX > 1024){
    myCircleX = 300;
}
}

//--------------------------------------------------------------
void testApp::draw(){
ofSetColor(255,0,200);
ofCircle(myCircleX, myCircleY, 60);

ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps", 10, 15);
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
