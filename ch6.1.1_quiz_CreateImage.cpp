#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat m1(200, 300, CV_8UC1, Scalar(0));
	Mat m2(200, 300, CV_8UC3);

	for (int i = 0; i < m1.rows; i++) {
		for (int j = 0; j < m1.cols; j++) {
			
			if (i >= 50 && i < 150) {
				m1.at<uchar>(i, j) = 255;
				m2.at<Vec3b>(i, j) = Vec3b(0, 255, 0);
			}
			else {
				m2.at<Vec3b>(i, j) = Vec3b(0, 0, 0);
			}
		}
	}

	imwrite("m1.jpg", m1);
	imwrite("m2.jpg", m2);
}