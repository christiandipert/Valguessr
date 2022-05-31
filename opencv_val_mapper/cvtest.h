#pragma once
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>
#include <vector>
#include <iostream>

using namespace std;
using namespace cv;

int testWebcam(int fps);
vector<Mat> loadMaps();