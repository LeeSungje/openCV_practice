#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat A(10, 15, CV_32SC1, Scalar(100));

	Mat B = A(Range(1, 5), Range(3, 8));
	Mat C = A(Range(5, 9), Range(8, 14));
	Mat D = A(Range(3,7), Range(5, 10));
	B.setTo(200);
	C.setTo(300);
	D.setTo(555);

	cout << A;
	
}