#include<opencv2\opencv.hpp>

using namespace cv;
using namespace std;

void print_matInfo(string m_name, Mat m) {
	cout << "[" << m_name << " 행렬" << endl;
	cout << "   채널수  = " << m.channels() << endl;
	cout << "	행 x 열 = " << m.rows << " x " << m.cols <<endl << endl;

}

void main() {
	Mat m1(3, 6, CV_8UC3);  //3채널 3행 6열  -> 3*3*6 = 54
	Mat m2 = m1.reshape(2, 3); // 54/2(2채널이니깐)=27 -> 따라서 뒤에 올수있는 값은 27의 약수가 될것

	print_matInfo("m1", m1);
	print_matInfo("m2", m2);
}