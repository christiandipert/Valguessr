#include "cvtest.h"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"

int testWebcam(int fps) {
	{

		cv::Mat frame; // initialize "frame" of type matrix

		cv::VideoCapture vid(0); // create videocapture object
		if (!vid.isOpened()) {
			return -1; // if video isnt opened, we shouldn't be doing anything
		}

		while (vid.read(frame)) { // while constantly reading each frame at speed "fps"

			imshow("Webcam", frame);
			if (cv::waitKey(1000 / fps) >= 0) { // wait for any pressed key, then break out of loop (stop showing camera)
				break;
			}
		}

	}
}