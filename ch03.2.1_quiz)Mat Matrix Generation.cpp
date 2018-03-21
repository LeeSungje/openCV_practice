#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void main() {

	int data1[] = {
		500, 100, -500, 1000, 0,
		500, 100, -500, 2000, 0,
	};

	double data2[] = {
		0.1, 5.1, -0.2,
		0.1, 4.1, -0.3,
		0.1, 3.1, -0.4
	};

	Mat m1(2, 5, CV_32SC1, data1);
	Mat m2(3, 3, CV_64FC1, data2);

	cout << "m1 = " << endl << m1 << endl;
	cout << "m2 = " << endl << m2 << endl;

}