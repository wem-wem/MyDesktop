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

	cout << "�i���o�[����͂��ĉ������B" << endl;
	cin >> car1.num;

	cout << "�K�\�����ʂ���͂��ĉ������B" << endl;
	cin >> car1.gas;

	//show(&car1);
	show(car1);

	return 0;
}


//// �\���̂ւ̃|�C���^�������Ƃ����ꍇ("->"�ŃA�N�Z�X)
//void show(Car* pC){
//	cout << "�Ԃ̃i���o�[��" << pC->num
//		<< "�K�\�����ʂ�" << pC->gas << "�ł��B" << endl;
//}

// �\���̂ւ̎Q�Ƃ������Ƃ����ꍇ("."�ŃA�N�Z�X)
void show(Car& pC){
	cout << "�Ԃ̃i���o�[��" << pC.num
		<< "�K�\�����ʂ�" << pC.gas << "�ł��B" << endl;
}


