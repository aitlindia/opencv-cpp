// ImageProcessingApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <stdio.h>

using namespace cv;

using namespace std;

int main(int argc, char** argv)
{
	if(argc !=2 ){
		cout << "usage: ./imageprocessing ../TestImages/cat.jpg" << endl;
		exit(0);
	}
    std::cout << "OpenCV App Test !\n";
	string image_lana = "D:\\Software/OpenCV/TestImages/lena.png";

	string image_cat = argv[1];//"D:\\Software/OpenCV/TestImages/cat.jpg";
	cout<< "Image path: "<<image_cat << endl;

	Mat imageMatLana;
	Mat  imgCatMat;
	Mat  imgCatMatGray;

	//IMREAD_COLOR

	//imageMatLana = imread(samples::findFile(image_lana), IMREAD_COLOR);
	imgCatMat = imread(image_cat, IMREAD_COLOR);
	if (imgCatMat.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	namedWindow("CAT", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("CAT", imgCatMat);  

	cvtColor(imgCatMat, imgCatMatGray, COLOR_RGB2GRAY);
	namedWindow("CATGray", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("CATGray", imgCatMatGray);
	//printf("Image Width: %d - heigt: %s",imgCatMat.size().width, imgCatMat.size().height);
	// Sh

	
	/*
	Mat image = Mat::zeros(300, 600, CV_8UC3);
	circle(image, Point(250, 150), 100, Scalar(0, 255, 128), -100);
	circle(image, Point(350, 150), 100, Scalar(255, 255, 255), -100);
	imshow("Display Window", image);
	*/

	waitKey(0);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
