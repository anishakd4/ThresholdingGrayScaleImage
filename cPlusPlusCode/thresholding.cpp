#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(){

    //Read a gray scale image or read a color image in gray scale format
    Mat inputImage = imread("../assets/gray_putin.jpg");

    Mat grayImage;

    //Binary threshold
    threshold(inputImage, grayImage, 100, 255, THRESH_BINARY);

    //Create windows to display images
    namedWindow("input image", WINDOW_NORMAL);
    namedWindow("binary image", WINDOW_NORMAL);

    //show images
    imshow("input image", inputImage);
    imshow("binary image", grayImage);

    //Press any key on keyboard to exit the program
    waitKey(0);

    //close the opened windows
    destroyAllWindows();
    
    return 0;
}