#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat image = imread("morph_test1.jpg", 0);
	CV_Assert(image.data);
	Mat th_img, dst1, dst2, dst3;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	uchar data[] = {
		0,1,0,
		1,1,1,
		0,1,0
	};

	Mat mask(3, 3, CV_8UC1, data);

	morphologyEx(th_img, dst1, MORPH_OPEN, mask);
	morphologyEx(th_img, dst2, MORPH_CLOSE, mask);
	morphologyEx(dst1, dst3, MORPH_CLOSE, mask);

	imshow("image", image);
	imshow("이진영상", th_img);
	imshow("opening", dst1);
	imshow("closing", dst2);
	imshow("opening + closing", dst3);
	waitKey();
}