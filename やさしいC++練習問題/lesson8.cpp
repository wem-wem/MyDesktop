#include <iostream>
using namespace std;

//// ���Q �|�C���^���g�����֐�add�̒�`
//void add(int* x1, int* x2){
//	int add_score;
//	cout << "���Z����_������͂��ĉ������B" << endl;
//	cin >> add_score;
//	cout << add_score << "�_���Z���܂����̂�" << endl;
//	cout << "�ȖڂP��" << *x1 + add_score << "�_�ƂȂ�܂����B" << endl;
//	cout << "�ȖڂQ��" << *x2 + add_score << "�_�ƂȂ�܂����B" << endl;
//}

// ���R �Q�Ƃ��g�����֐�add�̒�`
void add(int& x1, int& x2){
	int add_score;
	cout << "���Z����_������͂��ĉ������B" << endl;
	cin >> add_score;
	cout << add_score << "�_���Z���܂����̂�" << endl;
	cout << "�ȖڂP��" << x1 + add_score << "�_�ƂȂ�܂����B" << endl;
	cout << "�ȖڂQ��" << x2 + add_score << "�_�ƂȂ�܂����B" << endl;
}


int main(){
	int x1, x2;
	cout << "�Q�Ȗڕ��̓_������͂��ĉ������B" << endl;
	cin >> x1 >> x2;

	//add(&x1, &x2);	// ���Q�̊֐����g���ꍇ
	add(x1, x2);	// ���R�̊֐����g���ꍇ

	return 0;
}