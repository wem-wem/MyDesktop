#include <iostream>
using namespace std;

// ���z�֐��ɂ���------------------------------

// Car�N���X�̐錾
class Car{
protected:
	int num;
	double gas;

public:
	Car();
	void setCar(int n, double g);
	virtual void show();
};


// RacingCar�N���X�̐錾
class RacingCar : public Car{
private:
	int course;
public:
	RacingCar();
	void setCourse(int c);
	void show();
};

// Car�N���X�̃����o�֐���`
Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "�Ԃ��쐬���܂����B" << endl;
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[��" << num << "�ɁA�K�\�����ʂ�" << gas << "�ɂ��܂����B" << endl;
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B" << endl;
	cout << "�K�\�����ʂ�" << gas << "�ł��B" << endl;
}


// RacingCar�N���X�̃����o�֐���`
RacingCar::RacingCar()
{
	course = 0;
	cout << "���[�V���O�J�[���쐬���܂����B" << endl;
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�R�[�X�ԍ���" << course << "�ɂ��܂����B" << endl;
}

void RacingCar::show()
{
	cout << "���[�V���O�J�[�̃i���o�[��" << num << "�ł��B" << endl;
	cout << "�K�\�����ʂ�" << gas << "�ł��B" << endl;
	cout << "�R�[�X�ԍ���" << course << "�ł��B" << endl;
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