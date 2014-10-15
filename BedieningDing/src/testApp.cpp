#include "testApp.h"

class Dinges
{
public:
    ofColor col;

    Dinges()
    {
    }
    Dinges(float x, float y)
    {
        this->x = x; //??
        this->y = y; //?? wat staat hier nou eigenlijk?

    }
        void update()
        {

        }
        void draw()
        {
        ofSetColor(0,0,255);    //set te color to blue
        ofEllipse(x,y,10,10);
        }

private:
float x, y;
float speed_y;






};

Dinges myD; //???
Dinges myD2;
vector<Dinges>myDinges;
//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){


}

//--------------------------------------------------------------
void testApp::draw(){
myD.draw(); //waarom myD & niet myDinges?
myD1.draw();

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
