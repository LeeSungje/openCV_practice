#include <opencv2\opencv.hpp>

using namespace std;
using namespace cv;


void filter(Mat src, Mat &dst, Mat mask) {
	dst = Mat(src.size(), CV_32F, Scalar(0));
	Point h_m = mask.size() / 2;

	for (int i = h_m.y; i < src.rows - h_m.y; i++) {
		for (int j = h_m.x; j < src.cols - h_m.x; j++) {
			float sum = 0;
			for (int u = 0; u < mask.rows; u++) {
				for (int v = 0; v < mask.cols; v++) {
					int y = i + u - h_m.y;
					int x = j + v - h_m.x;
					sum += mask.at<float>(u, v) * src.at<uchar>(y, x);
				}
				dst.at<float>(i, j) = sum;
			}
		}
	}
}

int main() {

	Mat image = imread("filter_sharpen.jpg", IMREAD_GRAYSCALE);

	float data1[] = {
		0, -1, 0,
		-1, 5, -1,
		0,-1,0,
	};

	float data2[] = {
		-1, -1, -1,
		-1, 9, -1,
		-1,-1,-1,
	};

	Mat mask1(3, 3, CV_32F, data1);
	Mat mask2(3, 3, CV_32F, data2);

	Mat sharpen1, sharpen2;
	filter2D(image, sharpen1, image.depth(), mask1);
	filter2D(image, sharpen2, image.depth(), mask2);

	imshow("image", image);
	imshow("sharpen1", sharpen1);
	imshow("sharpen2", sharpen2);
	waitKey();

	return 0;
}