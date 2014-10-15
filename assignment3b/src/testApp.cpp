#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
ofSetFrameRate(60);
vel.x =10;
ball.x = ofGetWidth()/2;
ball.y = ofGetHeight()/2;
}

//--------------------------------------------------------------
void testApp::update(){

if(ball.x < 0 || ball.x > ofGetWidth())
{
vel.x *= -1;
}

}

//--------------------------------------------------------------
void testApp::draw(){
ofBackground(0);
ofSetColor(0,0,255);
ofFill();
ofCircle(ball.x, ball.y, 10);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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
