#include <iostream>
using namespace std;

// 問題２ 整数値をあらわすクラスPointの作成
class Point{
private:
	int x;
	int y;

public:
	int getX(){ return x; }
	int getY(){ return y; }

	void setX(int a);
	void setY(int b);
};

void Point::setX(int a){
	if (a >= 0 && a <= 10){
		Point::x = a;
	}
	else{
		Point::x = 0;
	}
}

void Point::setY(int b){
	if (b >= 0 && b <= 10){
		Point::y = b;
	}
	else{
		Point::y = 0;
	}
}

int main(){
	// 問題３ 問題２で作ったクラスを利用して入出力
	Point* point = new Point();
	int a, b;

	cout << "x座標を入力して下さい。" << endl;
	cin >> a;
	point->setX(a);

	cout << "y座標を入力して下さい。" << endl;
	cin >> b;
	point->setY(b);

	cout << "座標は(" << point->getX() << "," << point->getY() << ")です。" << endl;

	return 0;
}