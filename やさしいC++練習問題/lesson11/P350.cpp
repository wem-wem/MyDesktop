#include <iostream>
using namespace std;

struct Car{
	int num;
	double gas;
};

//void show(Car* pC);
void show(Car& pC);

int main(){
	Car car1 = { 0, 0.0 };

	cout << "ナンバーを入力して下さい。" << endl;
	cin >> car1.num;

	cout << "ガソリン量を入力して下さい。" << endl;
	cin >> car1.gas;

	//show(&car1);
	show(car1);

	return 0;
}


//// 構造体へのポインタを引数とした場合("->"でアクセス)
//void show(Car* pC){
//	cout << "車のナンバーは" << pC->num
//		<< "ガソリン量は" << pC->gas << "です。" << endl;
//}

// 構造体への参照を引数とした場合("."でアクセス)
void show(Car& pC){
	cout << "車のナンバーは" << pC.num
		<< "ガソリン量は" << pC.gas << "です。" << endl;
}


