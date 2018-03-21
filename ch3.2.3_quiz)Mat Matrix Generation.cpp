#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void main() {

	Mat_<int> m1(3, 2);
	m1 << 1, 1, 2, 2, 3, 3;

	Mat m2 = (Mat_<double>(2, 3) << 0.1, 5.1, -0.2, 0.1, 4.1, -0.3);

	cout << "m1 = " << endl << m1 << endl;
	cout << "m2 = " << endl << m2 << endl;

}