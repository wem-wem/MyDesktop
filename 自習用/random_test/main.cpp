#include <random>
#include <iostream>
#include <time.h>

int main(){
	/*******************/
	/*�񌈒�I�ȗ�������*/
	/*******************/
	//std::random_device rnd;
	//for (int i = 0; i < 10; ++i){
	//	std::cout << std::hex << rnd() << std::endl;
	//}
	//getchar();


	/*****************/
	/*����I�ȗ�������*/
	/*****************/
	//std::random_device rnd;
	//std::mt19937 mt(rnd());	// �錾�Ɠ����ɃV�[�h���w��
	////std::mt19937 mt((int)time(0));	// �錾�Ɠ����ɃV�[�h�w��(�f�o�C�X�̎��Ԃ𗘗p�A<time.h>�K�{)
	//for (int i = 0; i < 10; ++i){
	//	// std::hex ��16�i���ɐ��`
	//	std::cout << std::hex << mt() << std::endl;
	//}

	//// �錾������ł��V�[�h���w�肷�鎖���\--------------------------
	//std::mt19937 mt;
	//std::random_device rnd;
	////mt.seed(rnd());
	//mt.seed((int)time(0));
	//for (int i = 0; i < 10; ++i){
	//	std::cout << std::hex << mt() << std::endl;
	//}


	/*****************/
	/*�͈͎w�藐������*/
	/*****************/
	// std::mt19937 �ł͔͈͂��Œ肾�����̂ŁA������Ŏw��o����悤�ɂ���
	std::random_device rnd;	// �񌈒�I�ȗ���������ŃV�[�h�����@���쐬
	std::mt19937 mt(rnd());	// �����͏����V�[�h

	//// �����^�̏ꍇ�͂�������g�p
	//std::uniform_int_distribution<> rand100(0, 99);	// [0, 99] �͈͂̈�l����
	//std::uniform_int_distribution<> rand2(1.0, 2.0);	// �͈͂������_�Ŏw��o���邪�A�\�������̂͐���

	//// std::normal_distribution<> �̓f�t�H���g��double�^�Ȃ̂�
	//// �����̏ꍇ�͏�𗘗p
	//std::normal_distribution<> norm(50.0, 10.0);		// ����50�A���U�l10�̐��K���z
	std::normal_distribution<> norm(0.0, 0.2);			// ���ς��O�Ȃ̂Ń}�C�i�X�̒l���܂܂��

	for (int i = 0; i < 20; ++i){
		//std::cout << rand100(mt) << std::endl;
		//std::cout << rand2(mt) << std::endl;

		//std::cout << norm(mt) << std::endl;
		std::cout << norm(mt) << std::endl;
	}

	return 0;
}
