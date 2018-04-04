#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;



void main() {
	Mat m1(2, 6, CV_8U);	// 1ä�� 2�� 6��
	Mat m2 = m1.reshape(2);
	Mat m3 = m1.reshape(3, 2); //reshape�� ��������! �޸� ������!!

	m1 = Scalar(1);
	cout << endl << "<m1=1>" << endl;
	cout << "m1=" << endl << m1 << endl;
	cout << "m2=" << endl << m2 << endl;
	cout << "m3=" << endl << m3 << endl;

	m2 = Scalar(2,3);	//�̷��� ��� �ϳ� �� �ָ� ù��° ä�ο��� ���� ��
	cout << endl << "<m2=2>" << endl;
	cout << "m1=" << endl << m1 << endl;
	cout << "m2=" << endl << m2 << endl;
	cout << "m3=" << endl << m3 << endl;

	m3 = Scalar(1,2,3);
	cout << endl << "<m3=3>" << endl;
	cout << "m1=" << endl << m1 << endl;
	cout << "m2=" << endl << m2 << endl;
	cout << "m3=" << endl << m3 << endl;
}

