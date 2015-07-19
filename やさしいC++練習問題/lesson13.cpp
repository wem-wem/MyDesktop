#include <iostream>
using namespace std;

class Car{
private:
	int num;
	double gas;

public :
	Car(int n = 0, double g = 0);	// デフォルト引数を利用して、デフォルトコンストラクタを省略
	void Show();

	// 静的メンバ(static)
	static int sum;
	static void showSum();
};


Car::Car(int n, double g){
	sum++;
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。\n" << endl;
}

void Car::Show(){
	cout << "車のナンバーは" << num << "です。" << endl;
	cout << "ガソリン量は" << gas << "です。\n" << endl;
}

void Car::showSum(){
	cout << "車は全部で" << sum << "台あります。\n" << endl;
}

// 静的データメンバの初期化はクラスの外で宣言
int Car::sum = 0;

int main(){
	// showSumは静的メンバ関数なので、オブジェクトを作成しなくても呼び出せる。
	Car::showSum();

	Car car1;
	Car::showSum();

	Car car2(1234, 20.5);
	Car::showSum();

	car1.Show();
	car2.Show();
	return 0;
}