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


// Car�N���X�̃����o�֐���`------------------------------
Car::Car()
{
	num = 0;
	gas = 0;
	cout << "�Ԃ��쐬���܂����B" << endl;
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�A�K�\������" << gas << "�̎Ԃ��쐬���܂����B" << endl;
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


// Racing Car�N���X�̃����o�֐���`------------------------------
RacingCar::RacingCar()
{
	course = 0;
	cout << "���[�V���O�J�[���쐬���܂����B" << endl;
}

RacingCar::RacingCar(int n, double g, int c) :Car(n, g)
{
	course = c;
	cout << "�R�[�X�ԍ�" << course << "�̃��[�V���O�J�[���쐬���܂����B" << endl;
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�R�[�X�ԍ���" << course << "�ɂ��܂����B" << endl;
}


int main(){
	RacingCar rccar1(1234, 20.5, 5);

	return 0;
}