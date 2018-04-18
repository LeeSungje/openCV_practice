#include<opencv2\opencv.hpp>


using namespace cv;
using namespace std;


void main() {

	Mat img;
	img = imread("read_gray.jpg", IMREAD_GRAYSCALE);
	Point2i pt;

	for (int i = 1; i < img.rows - 1; i++) {
		for (int j = 1; j < img.cols - 1; j++) {
			if (img.at<uchar>(i, j) == 175 && img.at<uchar>(i - 1, j) == 255 && img.at<uchar>(i, j - 1) == 244 && img.at<uchar>(i, j + 1) == 254 && img.at<uchar>(i + 1, j) == 223) {
			
				pt.x = j;
				pt.y = i;
			}
		}
	}

	cout << pt << endl;
	
}