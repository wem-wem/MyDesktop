#include <iostream>
using namespace std;

// ���P �\����Person���쐬���A�Q�l���̏�����o�͂���
struct Person{
	int age;
	double weight;
	double height;
};

// ���Q �\���̂ւ̃|�C���^�������Ƃ��Ď󂯎��A
//�@�@�@�@�N����P���₷�֐��̍쐬�A���s
void aging(Person* p, int num);

int main(){
	int num;
	Person* pPer;

	cout << "���l���̏�����͂��܂����H" << endl;
	cin >> num;

	// �K�v�Ȑ�����Person�^�̔z���p��
	pPer = new Person[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << " �l�ڂ̐l�̔N�����͂��ĉ������B" << endl;
		cin >> pPer[i].age;
		cout << i + 1 << " �l�ڂ̐l�̑̏d����͂��ĉ������B" << endl;
		cin >> pPer[i].weight;
		cout << i + 1 << " �l�ڂ̐l�̐g������͂��ĉ������B" << endl;
		cin >> pPer[i].height;
	}

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "�l�ځF�N��" << pPer[i].age 
			<< " �̏d��" << pPer[i].weight 
			<< " �g����" << pPer[i].height << "�ł��B" << endl;
	}

	// ���Q------------------------------
	cout << "�P�N�o�߂��܂����B" << endl;
	for (int i = 0; i < num; i++)
	{
		aging(&pPer[i], i);
	}

	return 0;
}

void aging(Person* p, int num){
		cout << num + 1 << "�l�ځF�N��" << p->age + 1
			<< " �̏d��" << p->weight
			<< " �g����" << p->height << "�ł��B" << endl;
}