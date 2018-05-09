#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {
	
	Mat image = imread("morph_test1.jpg", 0);
	CV_Assert(image.data);
	Mat th_img, dst1, dst2;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	uchar data[] = {
		0,1,0,
		1,1,1,
		0,1,0
	};

	Mat mask(3, 3, CV_8UC1, data);

	morphologyEx(th_img, dst2, MORPH_DILATE, mask);
	morphologyEx(dst2, dst1, MORPH_ERODE, mask,Point(-1,-1),2);

	imshow("image", image);
	imshow("이진영상", th_img);
	imshow("dilation", dst2);
	imshow("dilation 후 erosion", dst1);
	waitKey();
}