#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

int main() {

	Mat image = imread("edge_test1.jpg", IMREAD_GRAYSCALE);
	Mat dst3, dst4, dst5;

	Sobel(image, dst3, CV_32F, 1, 0); //ksize부터는 default로~
	Sobel(image, dst4, CV_32F, 0, 1);
	magnitude(dst3, dst4, dst5);
	convertScaleAbs(dst5, dst5);

	imshow("dst5", dst5);
	waitKey();

	return 0;
}