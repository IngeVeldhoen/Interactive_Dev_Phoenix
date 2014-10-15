#include "testApp.h"
int index_ = 0;
float randoms[4];


//--------------------------------------------------------------
void testApp::setup(){
for(int i = 0; i < 4; i ++)
{
    randoms[i] = ofRandom(0,255);
}
ofSetFrameRate(3);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
//every frame we access one element of the array
ofBackground(randoms[index_]);

//and then go to the next
index_ =(index_ +1)%4;//using the modulo operator to limit the array
if(index_%4)
{
    ofSetColor(255,0,0);
    ofEllipse(index_*100, index_*100, 10, 10, 10);
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
