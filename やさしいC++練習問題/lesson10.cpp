// ���Q �R�[�h�̌������
#include <iostream>
using namespace std;

int main(){
	int* pA;
	pA = new int;
	*pA = 10;

	// �ǉ����delete��K������
	delete pA;

	return 0;
}