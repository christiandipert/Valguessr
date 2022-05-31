// standard libraries
#include <stdint.h>
#include <iostream>
#include <vector>
#include <iostream>
#include <ctime>

// opencv2 includes
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>

// custom includes
#include "cvtest.h"

using namespace std;
using namespace cv;


const vector<string> mapNames = { "ascent", "bind", "breeze", "fracture", "haven", "icebox", "split" };
const vector<string> mapFileLocations = { "maps/ascent.PNG", "maps/bind.PNG", "maps/breeze.PNG", "maps/fracture.PNG", "maps/haven.PNG", "maps/icebox.PNG", "maps/split.PNG" };


int main(int argv, char** argc) 
{
	srand(time(NULL)); // seed fully random numbers, fixes problem of same random number each time

	vector<Mat> maps = loadMaps(); // load maps into vector array of type Mat (matrix)

	int randomIndex = calcRandomIndex(0, maps.size()); // calculate a random index
	
	string mapChosen = mapNames[randomIndex]; // instantiate a variable of whichever map is randomly chosen. 

	Mat image = imread(mapFileLocations[randomIndex]); // read whichever map is at the random index, load it up.

	if (image.empty()) {
		cout << "Image load error" << endl; // if image doesnt load properly, return error code -1, stopping program
		return -1;
	}

	imshow("Valguessr", image); // if image loads properly, attempt to keep going

	waitKey(0); // wait for a pressed key
	

}
