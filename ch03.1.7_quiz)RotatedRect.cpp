#include<opencv2\opencv.hpp>

using namespace std;
using namespace cv;

void main() {

	Mat A(400, 400, CV_8UC3, Scalar(255, 255, 255));
	
	Point2f center(110, 110), pts[4];
	Size2f size(200, 20);
	

	for (int i = 0; i < 4; i++) {
		RotatedRect rot_rect(center, size, 45*i);
		rot_rect.points(pts);

		for (int j = 0; j < 4; j++) {
			if (j % 2 == 0) circle(A, ((pts[j] + pts[j + 1]) / 2), 10, Scalar(0), 2);
			line(A, pts[j], pts[(j + 1) % 4], Scalar(0), 2);
		}
	}

	imshow("test", A);
	waitKey(0);

}