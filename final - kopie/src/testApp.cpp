#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
ofSetFrameRate(60);
ofEnableAlphaBlending();
ofSetBackgroundAuto(false);
ofBackground(0);
X = ofRandom(0, 200);
Y = ofRandom(0, 600);



}

//--------------------------------------------------------------
void testApp::update(){


}

//--------------------------------------------------------------
void testApp::draw(){

ofSetColor(255,0,55,127);
ofFill();
ofCircle(X, Y, 30);

if (ofGetMousePressed()) {

X+=20;
Y+=20;

if (Y >= ofGetWindowHeight()){

X+=20;
Y=Y-400;
    }
}


    if (ofGetKeyPressed()){
X-=20;
Y-=20;
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
