#include <iostream>
#include <string>
using namespace std;

// �֐����͔z��̐擪�A�h���X���󂯎��Ă�
// �v�f���͕�����Ȃ��̂ŁA�v�f���������ɂ��ēn���B
int max(int x[], int nx);

int length(char* str);

int count(char str[], char ch);

int main(){
	// ���P------------------------------
	int score[5];
	cout << "�e�X�g�̓_������͂��ĉ������B" << endl;
	// �z��̗v�f����(�z��S�̂̑傫�� / �z��P���̑傫��)�ŋ��߂�
	int ns = sizeof(score) / sizeof(score[0]);
	for (int i = 0; i < ns; i++)
	{
		cin >> score[i];
	}
	cout << "�ō��_��" << max(score, ns) << "�_�ł��B" << endl;


	// ���Q------------------------------
	cout << "���������͂��ĉ������B" << endl;
	char str[10];
	cin >> str;
	cout << "������̒�����" << strlen(str) << "�ł��B" << endl;

	// ���R------------------------------
	char search_str;
	cout << "�����񂩂�T����������͂��ĉ������B" << endl;
	cin >> search_str;
	cout << str << "�̒���" << search_str << "�͑S����" << count(str, search_str) << "����܂��B" << endl;
	return 0;
}


// ���P �z��̒��ōł��傫�Ȑ�����Ԃ��֐�int max�̍쐬
int max(int x[], int nx){
	for (int i = 0; i < nx - 1; i++)
	{
		for (int r = i + 1; r < nx; r++)
		{
			if (x[i] < x[r]){
				int tmp = x[i];
				x[i] = x[r];
				x[r] = tmp;
			}
		}
		return x[i];
	}
}


// ���Q ������̒������o�͂���֐�int length�̍쐬
int length(char* str){
	return strlen(str);
}


// ���R ������Ɏw�肵�����������������Ă��邩�𒲂ׂ�֐�int count�̍쐬
int count(char str[], char ch){
	int cc = 0;
	for (int i = 0; i < strlen(str); i++){
		if (str[i] == ch){
			cc++;
		}
	}
	return cc;
}
