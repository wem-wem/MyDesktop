#include <iostream>
using namespace std;

class Car{
private:
	int num;
	double gas;

public:
	Car();
	Car(int n, double g);
	void setCar(int n, double g);
	void show();
};

class RacingCar : public Car{
private:
	int course;

public:
	RacingCar();
	RacingCar(int n, double g, int c);
	void setCourse(int c);
};


// Carクラスのメンバ関数定義------------------------------
Car::Car()
{
	num = 0;
	gas = 0;
	cout << "車を作成しました。" << endl;
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "、ガソリン量" << gas << "の車を作成しました。" << endl;
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "に、ガソリン量を" << gas << "にしました。" << endl;
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です。" << endl;
	cout << "ガソリン量は" << gas << "です。" << endl;
}


// Racing Carクラスのメンバ関数定義------------------------------
RacingCar::RacingCar()
{
	course = 0;
	cout << "レーシングカーを作成しました。" << endl;
}

RacingCar::RacingCar(int n, double g, int c) :Car(n, g)
{
	course = c;
	cout << "コース番号" << course << "のレーシングカーを作成しました。" << endl;
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました。" << endl;
}


int main(){
	RacingCar rccar1(1234, 20.5, 5);

	return 0;
}