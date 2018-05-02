#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

int main() {

	Mat image = imread("filter_blur.jpg", IMREAD_GRAYSCALE);

	Mat blur1;
	blur(image, blur1, Size(3,3));

	imshow("image", image);
	imshow("blur", blur1);
	waitKey();
	return 0;
}