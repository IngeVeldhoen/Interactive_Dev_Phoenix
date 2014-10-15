#include "testApp.h"
#include "ofMath.h"

class Line_ {
public:
    ofPolyline myPath;
    float xpos, ypos;
    int dik;
    Line_(float xpos_, float ypos_){
    xpos = xpos_;
    ypos = ypos_;
    }
Line_(){}

void draw(){
ofColor col;

col = ofFloatColor::fromHsb(static_cast<float>(ofRandom(0, 1.0)), 1,1,1);
ofSetColor(col);
ofPushMatrix();//Saves 0,0 matrix of that point of time
// move 0,0 point to other place
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//draw some stuff
//ofMap(valueToMap, the lowest of value, highest of value, lowested of scaleValue, highest of Scaled Value);
//ofMap(123, 0, 255, 0.0, 1.0);
int circleResolution = ofMap(ypos+100, 0, ofGetHeight(), 2.0, 10.0, true);
float radius = xpos - ofGetWidth()/2 + 0.5;
float angle = TWO_PI/circleResolution;
for(int i=0; i <=circleResolution; i++)
{
 float x_ = 0 + cos(angle*i) * radius;
float y_ = 0 + sin(angle*i) * radius;
myPath.addVertex(x_, y_);

}
myPath.draw();


ofPopMatrix(); //put back 0,0 : reset to saved 0,0 point


}

};


Line_ myLine;

//--------------------------------------------------------------
void testApp::setup(){
    dik = 2;
ofBackground(255);
ofSetBackgroundAuto(false);
ofEnableAlphaBlending();
ofSetLineWidth(3);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
if (ofGetMousePressed()) {
      dik++;

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
myLine = Line_(x, y);
myLine.draw();
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
