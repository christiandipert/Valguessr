// opencv2 includes
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>
#include <vector>
#include <iostream>

// custom includes
#include "cvtest.h"

// namespaces
using namespace std;

// goal: return a vector of images of each map in alphabetical order

vector<cv::Mat> loadMaps() {
	vector<string> mapFileLocations = { "maps/ascent.PNG", "maps/bind.PNG", "maps/breeze.PNG", "maps/fracture.PNG", "maps/haven.PNG", "maps/icebox.PNG", "maps/split.PNG" };
	vector<cv::Mat> maps; // inst. vector of maps
	for (int i = 0; i < mapFileLocations.size(); i++) {
		cv::Mat img = cv::imread(mapFileLocations[i]);
		if (!img.empty()) {
			maps.push_back(img);
		}
	}
	return maps;
}
