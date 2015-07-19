#include <iostream>
using namespace std;

class Car{
private:
	int num;
	double gas;

public :
	Car(int n = 0, double g = 0);	// �f�t�H���g�����𗘗p���āA�f�t�H���g�R���X�g���N�^���ȗ�
	void Show();

	// �ÓI�����o(static)
	static int sum;
	static void showSum();
};


Car::Car(int n, double g){
	sum++;
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂����B\n" << endl;
}

void Car::Show(){
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B" << endl;
	cout << "�K�\�����ʂ�" << gas << "�ł��B\n" << endl;
}

void Car::showSum(){
	cout << "�Ԃ͑S����" << sum << "�䂠��܂��B\n" << endl;
}

// �ÓI�f�[�^�����o�̏������̓N���X�̊O�Ő錾
int Car::sum = 0;

int main(){
	// showSum�͐ÓI�����o�֐��Ȃ̂ŁA�I�u�W�F�N�g���쐬���Ȃ��Ă��Ăяo����B
	Car::showSum();

	Car car1;
	Car::showSum();

	Car car2(1234, 20.5);
	Car::showSum();

	car1.Show();
	car2.Show();
	return 0;
}