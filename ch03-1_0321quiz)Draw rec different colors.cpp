#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void main() {

	Mat A(100, 200, CV_8UC3, Scalar(255, 255, 255));
	Rect R(90, 40, 20, 20);
	Rect R1, R2, R3;
	Point P(50, 0);

	R1 = R - P;
	R2 = R;
	R3 = R + P;

	rectangle(A, R1, Scalar(0, 0, 255));
	rectangle(A, R2, Scalar(255, 0, 0));
	rectangle(A, R3, Scalar(0,255, 0));

	imshow("test", A);
	waitKey(0);

}