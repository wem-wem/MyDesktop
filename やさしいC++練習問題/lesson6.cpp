#include "iostream"

using namespace std;
int main(){
	// �J��Ԃ��E���䕶
	cout << "�P�`�P�O�܂ł̋������o�͂��܂��B" << endl;
	for (int i = 1; i <= 10; i++){
		if (i % 2 == 0){
			cout << i << endl;
		}
	}


	// ���́E�v�Z
	int num = 1;	// while�̏����Ɏg�p����ׂɏ����l���P��
	int total = 0;

	cout << "�e�X�g�̓_������͂��ĉ������B(0�ŏI��)" << endl;

	while (num){
		cin >> num;

		if (num != 0)
		{
			total = total + num;
		}

		// num �ɂP��������ꂽ���A���v�\����while�̃��[�v���I������B
		else
		{
			cout << "�e�X�g�̍��v�_��" << total << "�_�ł��B" << endl;
		}
	}


	// �J��Ԃ����̃l�X�g
	for (int i = 1; i <= 5; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}