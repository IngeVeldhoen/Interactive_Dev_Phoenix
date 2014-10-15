#include "testApp.h"
#include <vector>;
int index_;

vector<float> randomCount;
//--------------------------------------------------------------
void testApp::setup(){
for(int i = 20; i > 0; i--)
{
    randomCount.push_back(0);
}
ofBackground(255);
ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){
    //pick a random number and increase the count
index_ = ofRandom(randomCount.size());
randomCount[index_] ++;
//draw result
ofColor col = ofColor(255,0,0);
ofSetColor(col);
ofFill();
}

//--------------------------------------------------------------
void testApp::draw(){
for(int i = 0; i < randomCount.size(); i ++)
{
    ofRect(i*60, 0, 20, randomCount[i]);
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
