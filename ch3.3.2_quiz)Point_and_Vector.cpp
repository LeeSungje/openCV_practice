#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;


void main() {

	vector<Point> pts;

	Point arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = Point(2*i + 1, 2*i + 2);
		pts.push_back(arr[i]);
	}

	for (int i = 0; i < (int)pts.size(); i++) {
		cout << format("pts[%d] = ", i) << pts[i] << endl;
	}
}
