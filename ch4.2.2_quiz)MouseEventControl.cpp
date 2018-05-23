#include<opencv2\opencv.hpp>
#include <cmath>

using namespace cv;
using namespace std;

void onMouse1(int, int, int, int, void *);
void onMouse2(int, int, int, int, void *);

int main() {

	Mat image(200, 300, CV_8U);
	image.setTo(255);
	imshow("���콺 �̺�Ʈ 1", image);
	imshow("���콺 �̺�Ʈ 2", image);
	
	setMouseCallback("���콺 �̺�Ʈ 1", onMouse1, 0);
	setMouseCallback("���콺 �̺�Ʈ 2", onMouse2, 0);

	waitKey();

	return 0;


}

void onMouse1(int event, int x, int y, int flags, void * param) {

	switch (event) {
	case 1:
		cout << "���콺 ���� ������" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;

	case 4:
		cout << "���콺 ���� ����" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;

	case 7:
		cout << "���콺 ���� ����Ŭ��" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;
	}
	

}

void onMouse2(int event, int x, int y, int flags, void * param) {

	switch (event) {

	case 2:
		cout << "���콺 ������ ������" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;

	case 5:
		cout << "���콺 ������ ����" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;

	case 8:
		cout << "���콺 ������ ����Ŭ��" << endl;
		cout << "(" << x << " , " << y << ")" << endl;
		break;
	}
	

}