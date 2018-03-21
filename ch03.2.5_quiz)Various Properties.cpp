#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat m1(5, 3, CV_16SC3);

	cout << m1.dims << endl;
	cout << m1.rows << endl;
	cout << m1.cols << endl;
	cout << m1.size() << endl;
	cout << endl;

	cout << m1.total() << endl;
	cout << m1.elemSize() << endl;
	cout << m1.elemSize1() << endl;
	cout << endl;

	cout << m1.type() << endl;
	cout << ((m1.channels() - 1) << 3) + m1.depth() << endl;
	cout << m1.depth() << endl;
	cout << m1.channels() << endl;
	cout << endl;

	cout << m1.step << endl;
	cout << m1.step1() << endl;

	return 0;

}