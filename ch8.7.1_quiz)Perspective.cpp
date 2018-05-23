#include<opencv2\opencv.hpp>
#include <cmath>


using namespace cv;
using namespace std;


int main() {

	Mat img = imread("persp.jpg", 0);
	CV_Assert(img.data);

	threshold(img, img, 128, 255, THRESH_BINARY);

	Point pt;
	Point pt1, pt2 , pt3, pt4;
	float min_distance1 = FLT_MAX, min_distance2 = FLT_MAX, min_distance3 = FLT_MAX, min_distance4 = FLT_MAX;

	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {

			if (img.at<uchar>(i, j) == 255)
				continue;

			pt.x = j;
			pt.y = i;

			float distance1 = sqrt(pow(pt.x - 0, 2) + pow(pt.y - 0, 2));
			float distance2 = sqrt(pow(pt.x - img.cols, 2) + pow(pt.y - 0, 2));
			float distance3 = sqrt(pow(pt.x - 0, 2) + pow(pt.y - img.rows, 2));
			float distance4 = sqrt(pow(pt.x - img.cols, 2) + pow(pt.y - img.rows, 2));
			
			if (min_distance1 > distance1) {
				min_distance1 = distance1;
				pt1 = pt;
			}
			if (min_distance2 > distance2) {
				min_distance2 = distance2;
				pt2 = pt;
			}
			if (min_distance3 > distance3) {
				min_distance3 = distance3;
				pt3 = pt;
			}
			if (min_distance4 > distance4) {
				min_distance4 = distance4;
				pt4 = pt;
			}
			
			}
		}
	

	circle(img, pt1, 3, Scalar(0), 2);
	circle(img, pt2, 3, Scalar(0), 2);
	circle(img, pt3, 3, Scalar(0), 2);
	circle(img, pt4, 3, Scalar(0), 2);


	imshow("image", img);
	
	waitKey();

	return 0;


}