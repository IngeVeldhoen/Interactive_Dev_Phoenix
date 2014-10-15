#include "ofMain.h"
#include "ofAppGlutWindow.h"

class testApp : public ofBaseApp {
public:

ofMesh              mesh;

 void setup() {

 ofSetFrameRate(100);
 ofBackground(255);
 ofSetColor(0,0,0,40);
 ofSetBackgroundAuto(false);
 ofEnableAlphaBlending();
 ofSetVerticalSync(true);
 mesh.setMode(OF_PRIMITIVE_POINTS);


 for (int i=0; i<1000; i++) {
    mesh.addVertex(ofPoint(ofRandomWidth(), ofRandomHeight()));
}

 }

 void update() {

for (int i=0; i<mesh.getNumVertices(); i++) {
    ofPoint &p = mesh.getVertices().at(i);
    ofPoint(p.x++);
    ofRandomf();
    ofPoint(p.y++);
    ofRandomf();


    float x = .01 * p.x;
    float y = .01 * p.y;
    float z = .01 * ofGetFrameNum();

    float angle = ofNoise(x,y,z) * TWO_PI;

    p.x += cos(angle);
    p.y += sin(angle);

}


 }

 void draw() {
 //ofCircle(mouseX, mouseY, 50, 50);
 mesh.draw();
 }

//void mouseDragged(int x, int y, int button) {
 //mesh.addVertex(ofPoint(x,y));
 //mesh.setMode();
//}



};

int main() {
 ofAppGlutWindow window;
 //window.setGlutDisplayString("rgba double samples>=4");
 ofSetupOpenGL(&window, 400, 400, OF_WINDOW);
 ofRunApp(new testApp());
}


