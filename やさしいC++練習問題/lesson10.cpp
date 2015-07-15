// 問題２ コードの誤りを訂正
#include <iostream>
using namespace std;

int main(){
	int* pA;
	pA = new int;
	*pA = 10;

	// 追加･･･deleteを必ずする
	delete pA;

	return 0;
}