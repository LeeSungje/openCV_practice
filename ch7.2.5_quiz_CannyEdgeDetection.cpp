#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

int main() {

	Mat image = imread("cannay_tset.jpg", IMREAD_GRAYSCALE);
	Mat dst5;

	Canny(image, dst5, 100, 150);
	

	imshow("dst5", dst5);
	waitKey();

	return 0;
}