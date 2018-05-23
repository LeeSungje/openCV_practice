#include<opencv2\opencv.hpp>
#include <cmath>


using namespace cv;
using namespace std;


int main() {

	Mat image = imread("read_gray.jpg", 0);

	string title1 = "AutoSize";
	string title2 = "Normal";

	namedWindow(title1, WINDOW_AUTOSIZE);
	namedWindow(title2, WINDOW_NORMAL);

	resizeWindow(title1, 500, 200);
	resizeWindow(title2, 500, 200);

	imshow(title1, image);
	imshow(title2, image);

	waitKey();

	return 0;


}