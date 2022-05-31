#include "opencv2/opencv.hpp"
#include <stdint.h>

using namespace std;
using namespace cv;

const int fps = 30; // declare constant FPS variable

int main(int argv, char** argc) 
{
	
	Mat frame; // initialize "frame" of type matrix

	VideoCapture vid(0); // create videocapture object
	if (!vid.isOpened()) {
		return -1; // if video isnt opened, we shouldn't be doing anything
	}

	while (vid.read(frame)) { // while constantly reading each frame at speed "fps"
		
		imshow("Webcam", frame);
		if (waitKey(1000 / fps) >= 0) { // wait for any pressed key
			break;
		}
	}
	return 1;



}

