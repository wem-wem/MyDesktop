#include <iostream>
using namespace std;

// 仮想関数について------------------------------

// Carクラスの宣言
class Car{
protected:
	int num;
	double gas;

public:
	Car();
	void setCar(int n, double g);
	virtual void show();
};


// RacingCarクラスの宣言
class RacingCar : public Car{
private:
	int course;
public:
	RacingCar();
	void setCourse(int c);
	void show();
};

// Carクラスのメンバ関数定義
Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。" << endl;
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


// RacingCarクラスのメンバ関数定義
RacingCar::RacingCar()
{
	course = 0;
	cout << "レーシングカーを作成しました。" << endl;
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました。" << endl;
}

void RacingCar::show()
{
	cout << "レーシングカーのナンバーは" << num << "です。" << endl;
	cout << "ガソリン量は" << gas << "です。" << endl;
	cout << "コース番号は" << course << "です。" << endl;
}


int main(){
	Car* pCars[2];

	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0]->setCar(1234, 20.5);

	pCars[1] = &rccar1;
	pCars[1]->setCar(4567, 30.5);

	for (int i = 0; i < 2; i++){
		pCars[i]->show();
	}

	return 0;
}