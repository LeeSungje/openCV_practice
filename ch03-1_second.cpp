#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void main() {
	
	Size sz(20, 30);
	Point pt1(10, 15);

	Rect_<int> rect1(30, 40, 100, 200);

	cout << "Original rect = " << rect1 << endl;

	rect1 = rect1 + pt1;
	rect1 = rect1 + sz;
	cout << "Modified rect = " << rect1 << endl;


}