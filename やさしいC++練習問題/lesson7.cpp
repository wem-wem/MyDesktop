#include <iostream>
using namespace std;

//// 問題３ inline化 

//// 問題１ ２乗にする為の関数(int型指定)
//inline int square(const int i){
//	return i * i;
//}
//
// 問題２ ２乗にする為の関数(double型指定)
//inline double square(const double d){
//	return d * d;
//}

// 問題４ 関数テンプレート
template <class T>
T square(T x){
	return x * x;
}

int main(){
	int num;
	double dnum;

	cout << "整数を入力して下さい。" << endl;
	cin >> num;
	cout << num << "の２乗は" << square(num) << "です。" << endl;

	cout << "少数を入力して下さい。" << endl;
	cin >> dnum;
	cout << dnum << "の２乗は" << square(dnum) << "です。" << endl;

	return 0;
}

