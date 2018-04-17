#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


void main() {

	Mat A(10, 15, CV_32SC1, Scalar(100));

	Mat B = A(Rect(3, 1, 5, 4)); //Range와 Rect의 시작점 잘 비교하기!
	Mat C = A(Rect(8,5,6,4));
	Mat D = A(Range(3, 7), Range(5, 10));
	B.setTo(200);
	C.setTo(300);
	D.setTo(555);

	cout << A;

}