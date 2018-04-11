#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat A(300,500, CV_8UC1, Scalar(255)); 
	Mat B(A, Rect(10, 10, 250, 250)); 
	Mat C(A, Range::all(), Range(50, 500));

	circle(A, Point2i(100, 100), 50, 0);
	circle(B, Point2i(190, 90), 50, 0);
	circle(C, Point2i(250, 100), 50, 0);
	

	imshow("test", A);
	waitKey(0);
}