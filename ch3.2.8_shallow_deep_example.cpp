#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


void main() {
	Mat A(200, 200, CV_8UC3, Scalar(255, 255, 255));

	//Mat B(A);	//case 1
	
	/* Mat C;
	C = A.clone(); */	//case 2
	
	/* Mat D;
	D = A; */	//case 3

	/* Mat E;
	A.copyTo(E); */ // case4

	Point2i point(100, 100);

	//circle(B, point, 100, 255);	//case 1	-> shallow
	//circle(C, point, 100, 255);	//case 2	-> deep
	//circle(D, point, 100, 255);	//case 3	-> shallow
	//circle(E, point, 100, 255);	//case 4	-> deep

	imshow("test", A);
	waitKey(0);
}

