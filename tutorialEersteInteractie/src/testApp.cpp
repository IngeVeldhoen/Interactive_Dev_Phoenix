#include "testApp.h"

int myCircleX;
int myCircleY;
int myCircleRadius = 100;

//--------------------------------------------------------------
void testApp::setup(){
myCircleX = 300;
myCircleY = 200;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
ofSetColor(255,0,255);
ofCircle(myCircleX, myCircleY, myCircleRadius);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
cout <<"keypressed"<<(char)key<<endl;
if(key=='w'){
    myCircleY-=4;
}
if(key=='a'){
    myCircleX-=4;
}
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
cout<<"keyreleased"<<(char)key<<endl;
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    float distance = ofDist(myCircleX, myCircleY, x, y);
    cout<<distance<<endl;

    if(distance < myCircleRadius){
        myCircleRadius+=4;
    }

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
