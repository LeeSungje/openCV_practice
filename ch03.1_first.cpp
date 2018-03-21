#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void main() {

	Point2f pt6(0.6f, 0.6f);
	Point2f pt7(0.7f, 0.7f);
	Point2f pt8(0.8f, 0.8f);
	Point2f pt9(0.9f, 0.9f);
	Point2f pt10(0.10f, 0.10f);

	Point ptA1 = pt6 + pt6;
	Point ptA2 = pt7 + pt7;
	Point ptA3 = pt8 + pt8;
	Point ptA4 = pt9 + pt9;
	Point ptA5 = pt10 + pt10;

	cout << ptA1 << endl;
	cout << ptA2 << endl;
	cout << ptA3 << endl;
	cout << ptA4 << endl;
	cout << ptA5 << endl;
}