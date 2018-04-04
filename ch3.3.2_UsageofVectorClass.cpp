#include<opencv2\opencv.hpp>
#include<time.h>

using namespace cv;
using namespace std;


void main() {

	vector<double> v1, v2;
	v1.reserve(10000000);

	double start_time = clock();
	for (int i = 0; i < v1.capacity(); i++) {
		v1.push_back(i);
	}
	
	cout << "reserve() 사용 " << clock() - start_time << " ms" << endl;

	start_time = clock();
	for (int i = 0; i < v1.capacity(); i++) {
		v2.push_back(i);
	}

	cout << "reserve() 미사용 " << clock() - start_time << " ms" << endl;
}