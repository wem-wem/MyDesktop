#include <iostream>
using namespace std;

//// ���R inline�� 

//// ���P �Q��ɂ���ׂ̊֐�(int�^�w��)
//inline int square(const int i){
//	return i * i;
//}
//
// ���Q �Q��ɂ���ׂ̊֐�(double�^�w��)
//inline double square(const double d){
//	return d * d;
//}

// ���S �֐��e���v���[�g
template <class T>
T square(T x){
	return x * x;
}

int main(){
	int num;
	double dnum;

	cout << "��������͂��ĉ������B" << endl;
	cin >> num;
	cout << num << "�̂Q���" << square(num) << "�ł��B" << endl;

	cout << "��������͂��ĉ������B" << endl;
	cin >> dnum;
	cout << dnum << "�̂Q���" << square(dnum) << "�ł��B" << endl;

	return 0;
}

