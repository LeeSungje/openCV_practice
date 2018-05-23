#include<opencv2\opencv.hpp>
#include <cmath>


using namespace cv;
using namespace std;


int main() {

	Mat img = imread("affine.jpg",0);
	CV_Assert(img.data);

	threshold(img, img, 128, 255, THRESH_BINARY);

	Point pt1;
	Point2f y_max(0, 0), y_min(300,300), x_max(0, 0), x_min(300, 300);

	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {
			
			if (img.at<uchar>(i, j) == 255)
				continue;
			
			pt1.x = j;
			pt1.y = i;
			if (pt1.y > y_max.y) {
				y_max= pt1;
			}
			if (pt1.y < y_min.y) {
				y_min = pt1;
			}
			if (pt1.x > x_max.x) {
				x_max = pt1;
			}
			if (pt1.x < x_min.x) {
				x_min = pt1;
			}
		}
	}
	
	circle(img, y_max, 3, Scalar(0, 0, 255), 2);
	circle(img, y_min, 3, Scalar(0, 0, 255), 2);
	circle(img, x_max, 3, Scalar(0, 0, 255), 2);
	circle(img, x_min, 3, Scalar(0, 0, 255), 2);

	Point2f pt2[3] = { x_max, y_min, x_min };

	double distance = sqrt(pow(y_min.x - y_max.x, 2) + pow(y_min.y - y_max.y, 2));
	int d = distance / 2;

	Point2f pt11(img.cols / 2 + d, img.rows / 2), pt22(img.cols / 2, img.rows / 2 - d), pt33(img.cols / 2 - d, img.rows / 2);
	Point2f pt3[3] = { pt11, pt22, pt33 };
	
	Mat aff_map = getAffineTransform(pt2, pt3);

	Mat dst1, dst2;
	warpAffine(img, dst1, aff_map, img.size(), INTER_LINEAR);
	warpAffine(img, dst2, aff_map, img.size(), INTER_LINEAR, BORDER_CONSTANT, Scalar(255,255,255));
	
	imshow("image", img);
	imshow("dst1", dst1);
	imshow("dst2", dst2);
	waitKey();

	return 0;


}