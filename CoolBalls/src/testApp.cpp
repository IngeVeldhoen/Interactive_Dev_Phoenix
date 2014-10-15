#include "testApp.h"

class CircleSpot {
public:
    float innerRadius;
    float outerRadius;
    ofPoint pos;
    ofColor colorA;
    ofColor colorB;
    float pct;
    ofImage img;
    ofColor color;
ofConePrimitive cone;

    void setup()
    {
   // img.loadImage("salad6402.jpg");


    pos.set(ofRandom(0,ofGetWidth()), ofRandom(0, ofGetHeight()));
    innerRadius = ofRandom(20,100);
    outerRadius = innerRadius + ofRandom(20,300);
   colorA.setHsb(ofRandom(120, 150), 55,255);
colorB.setHsb(ofRandom(235,255),255,255);
    cone.set( innerRadius, 20, 40, 40 );

    }

    void update(ofPoint mouse)
    {
        //colorA = img.getColor(ofGetMouseX(), ofGetMouseY());
   // colorB.setHsb(ofRandom(235,255),255,255);
     /*float distance = (pos-mouse).lenght();
     //get the distance of center of the circle to the mouse
     pct = (distance - innerRadius) / (outerRadius-innerRadius);
     //give me a fraction based on distance minus the radius from the total possible change in the sircle from big to small
     pct = ofClamp(pct, 0,1);
     //make this always between 0 and 1*/
     float distance = (pos-mouse).length();
            pct = (distance - innerRadius) / (outerRadius -innerRadius);
            pct = ofClamp(pct, 0,1);

    }
    void draw()
    {
      ofColor mix;
      mix.r = (1-pct)*colorB.r + (pct) *colorA.r;
      //this starts off with all of an then
      //goes to all of b - it's like a shift
      mix.g = (1-pct)*colorB.g + (pct) *colorA.g;
      mix.b = (1-pct)*colorB.b + (pct) *colorA.b;

      ofSetColor(mix);
    //  ofCircle(pos, innerRadius*(pct));
    cone.setPosition(pos.x, pos.y, 0);
    cone.rotate(30, innerRadius, outerRadius, 0.0);
    cone.rotate(40, innerRadius, outerRadius, 0.0);

    // get all the faces from the cpme, handy when you want to copy
    // individual vertices or tweak them a little ;)
    vector<ofMeshFace> triangles = cone.getMesh().getUniqueFaces();

    // now draw
    cone.draw();

    }

};

CircleSpot s;
vector <CircleSpot> spots;
ofImage img;


//--------------------------------------------------------------
void testApp::setup(){
   // img.loadImage("salad6402.jpg");
   ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
   ofEnableAlphaBlending();
   ofBackground(255,0,0);
   ofColor color;

ofSetCircleResolution(100);
for(int i=0; i <1500; i++)
{

    CircleSpot c;
    c.setup();
    //color = img.getColor(c.pos.x, c.pos.y);
    spots.push_back(c);

   /* Particle p;
    p.setup();
    p.pos.set(ofRandomWidth(), ofRandomHeight());
    p.color = img.getColor(p.pos.x,p.pos.y);
    particles.push_back(p);
    */


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
   spots[i].draw();
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
