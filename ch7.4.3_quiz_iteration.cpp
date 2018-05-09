#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat image = imread("mtest.jpg", 0);
	CV_Assert(image.data);
	Mat th_img, dst1, dst2, dst3, dst4, dst11, dst22, dst33, dst44, dst10;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	uchar data[] = {
		1,1,1,
		1,1,1,
		1,1,1
	};

	Mat mask(3, 3, CV_8UC1, data);

	morphologyEx(th_img, dst1, MORPH_ERODE, mask);
	morphologyEx(th_img, dst2, MORPH_DILATE, mask);
	morphologyEx(th_img, dst3, MORPH_OPEN, mask);
	morphologyEx(th_img, dst4, MORPH_CLOSE, mask);

	morphologyEx(th_img, dst11, MORPH_ERODE, mask, Point(-1,-1), 3);
	morphologyEx(th_img, dst22, MORPH_DILATE, mask, Point(-1, -1), 3);
	morphologyEx(th_img, dst33, MORPH_OPEN, mask,Point(-1, -1), 3);
	morphologyEx(th_img, dst44, MORPH_CLOSE, mask,Point(-1, -1), 3);

	morphologyEx(th_img, dst10, MORPH_CLOSE, mask, Point(-1, -1), 10);  //10번 반복하면 뾰죡한 것도 거의 없어지는 현상이....

	imshow("image", image);
	imshow("이진영상", th_img);
	imshow("1번 반복 ERODE", dst1);
	imshow("1번 반복 DILATION", dst2);
	imshow("1번 반복 OPEN", dst3);
	imshow("1번 반복 CLOSE", dst4);

	imshow("3번 반복 ERODE", dst11);
	imshow("3번 반복 DILATION", dst22);
	imshow("3번 반복 OPEN", dst33);
	imshow("3번 반복 CLOSE", dst44);
	imshow("10번 반복 CLOSE", dst10);
	waitKey();
}