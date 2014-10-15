#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
ofSetFrameRate(60);
ofEnableAlphaBlending();
ofSetBackgroundAuto(false);
ofBackground(0);


}

//--------------------------------------------------------------
void testApp::update(){


}

//--------------------------------------------------------------
void testApp::draw(){
   // ofEnableAlphaBlending();    // turn on alpha blending
    ofSetColor(0, 100);
    ofRect(0,0, ofGetWidth(), ofGetHeight());

 for (int i=0; i<100; i++) {
   dotjes[i].draw();
}
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
