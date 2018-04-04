#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;

void print_matInfo(string m_name, Mat m) {
	cout << "[" << m_name << " ���" << endl;
	cout << "   ä�μ�  = " << m.channels() << endl;
	cout << "	�� x �� = " << m.rows << " x " << m.cols <<endl << endl;

}

void main() {
	Mat m1(3, 6, CV_8UC3);  //3ä�� 3�� 6��  -> 3*3*6 = 54
	Mat m2 = m1.reshape(2, 3); // 54/2(2ä���̴ϱ�)=27 -> ���� �ڿ� �ü��ִ� ���� 27�� ����� �ɰ�

	print_matInfo("m1", m1);
	print_matInfo("m2", m2);
}