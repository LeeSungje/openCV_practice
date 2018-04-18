#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


void main() {
	Mat image = imread("contrast_test.jpg", 0);
	CV_Assert(image.data);

	Mat dst1 = image * 0.5;
	Mat dst2 = image * 2.0;
	Mat dst5 = dst1 * 2.0;
	Mat dst6 = dst2 * 0.5;

	imshow("image", image);
	imshow("1", dst1);
	imshow("2", dst2);
	imshow("5", dst5);
	imshow("6", dst6);
	waitKey();
}