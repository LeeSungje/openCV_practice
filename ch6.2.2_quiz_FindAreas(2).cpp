#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;

#define BLOCK_SIZE 32 

double my_mean(Mat a) {

	double sum;

	for (int i = 0; i < a.rows; i++) {
		for (int j = 0; j < a.cols; j++) {
			sum += a.at<uchar>(i, j);
		}
	}
	return sum / (a.rows*a.cols);
}

int main() {
	Mat img;
	img = imread("pixel_test.jpg", IMREAD_GRAYSCALE);
	Rect dark_rect, bright_rect;
	int max = 0, min = 255;

	Mat roi_img;
	
	for (int i = 0; i < img.rows - BLOCK_SIZE; i++) {
		for (int j = 0; j < img.cols - BLOCK_SIZE; j++) {
			Rect roi(j, i, BLOCK_SIZE, BLOCK_SIZE);
			roi_img = img(roi);
			if (max < (int)my_mean(roi_img)) {
				max = (int)my_mean(roi_img);
				bright_rect = roi;
			}
			if (min > (int)my_mean(roi_img)) {
				min = (int)my_mean(roi_img);
				dark_rect = roi;
			}
		}
	}

	cout << "Max : " << max << ", Min :" << min << endl;

	rectangle(img, bright_rect, Scalar(0), 1);
	rectangle(img, dark_rect, Scalar(255), 1);


	imshow("image", img); waitKey(); return 0;
}