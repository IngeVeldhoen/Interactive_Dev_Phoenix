#include "testApp.h"

class CircleSpot
{

    public:
        float innerRadius;
        float outerRadius;
        ofPoint pos;
        ofColor colorA;
        ofColor colorB;
        float pct;
        //what happens in this sketch is that the mouse position indicates the width of the circle and how bright it is
        //a container of those circles is then made and updated every frame.
        void setup(){

            pos.set(ofRandom(0,ofGetWidth()), ofRandom(0, ofGetHeight()));
            innerRadius = ofRandom(20,100);
            outerRadius = innerRadius + ofRandom(20,300);
            colorA.setHsb(ofRandom(0,60), 255,255);
            colorB.setHsb(ofRandom(0,255), 60,60);
        }

        void update(ofPoint mouse)
        {
            float distane = (pos-mouse).length();
            pct = (distane - innerRadius) / (outerRadius -innerRadius);
            pct = ofClamp(pct, 0,1);

        }
        void draw()
        {
            ofColor mix;
            mix.r = (1-pct) * colorA.r + (pct) *colorB.r;
            //this starts off with all of a then
            //goes to all of b - it's like a shift

            ///start typing here class!!
            mix.g = (1-pct) * colorA.g + (pct) *colorB.g;
            mix.b = (1-pct) * colorA.b + (pct)*colorB.b;

            ofSetColor(mix);
            ofCircle(pos, innerRadius *(pct));

        }

};

CircleSpot s;
vector <CircleSpot> spots;



//--------------------------------------------------------------
void testApp::setup(){
    ofSetCircleResolution(100);
    for (int i=0; i <1000; i++)
    {
        CircleSpot c;
        c.setup();
        spots.push_back(c);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i <spots.size(); i++)
    {
        spots[i].update(ofPoint(mouseX, mouseY));
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i = 0; i< spots.size(); i++)
    {
        spots.draw();

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
