#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	gui.setup(); // most of the time you don't need a name
	gui.add(circleRadius.setup("circle radius", 140, 10, 300));
	gui.add(
		circleCenter.setup("circle center", {ofGetWidth() * .25, ofGetHeight() * .5}, {0, 0},
		                   {ofGetWidth(), ofGetHeight()}));
	gui.add(circleColor.setup("circle color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
	gui.add(squareWidth.setup("square size", 280, 10, 600));
	gui.add(
		squareCenter.setup("square center", {ofGetWidth() - ofGetWidth() * .25, ofGetHeight() * .5}, {0, 0},
		                   {ofGetWidth(), ofGetHeight()}));
	gui.add(squareColor.setup("square color", ofColor(90, 130, 115), ofColor(0, 0), ofColor(255, 255)));

	ofSetCircleResolution(60);
	ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(circleColor);
	ofDrawCircle(circleCenter, circleRadius);
	ofSetColor(squareColor);
	ofDrawRectangle(squareCenter, squareWidth, squareWidth);
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
