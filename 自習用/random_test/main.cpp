#include <random>
#include <iostream>
#include <time.h>

int main(){
	/*******************/
	/*非決定的な乱数生成*/
	/*******************/
	//std::random_device rnd;
	//for (int i = 0; i < 10; ++i){
	//	std::cout << std::hex << rnd() << std::endl;
	//}
	//getchar();


	/*****************/
	/*決定的な乱数生成*/
	/*****************/
	//std::random_device rnd;
	//std::mt19937 mt(rnd());	// 宣言と同時にシードを指定
	////std::mt19937 mt((int)time(0));	// 宣言と同時にシード指定(デバイスの時間を利用、<time.h>必須)
	//for (int i = 0; i < 10; ++i){
	//	// std::hex で16進数に整形
	//	std::cout << std::hex << mt() << std::endl;
	//}

	//// 宣言した後でもシードを指定する事が可能--------------------------
	//std::mt19937 mt;
	//std::random_device rnd;
	////mt.seed(rnd());
	//mt.seed((int)time(0));
	//for (int i = 0; i < 10; ++i){
	//	std::cout << std::hex << mt() << std::endl;
	//}


	/*****************/
	/*範囲指定乱数生成*/
	/*****************/
	// std::mt19937 では範囲が固定だったので、こちらで指定出来るようにする
	std::random_device rnd;	// 非決定的な乱数生成器でシード生成機を作成
	std::mt19937 mt(rnd());	// 引数は初期シード

	//// 整数型の場合はこちらを使用
	//std::uniform_int_distribution<> rand100(0, 99);	// [0, 99] 範囲の一様乱数
	//std::uniform_int_distribution<> rand2(1.0, 2.0);	// 範囲を小数点で指定出来るが、表示されるのは整数

	//// std::normal_distribution<> はデフォルトでdouble型なので
	//// 整数の場合は上を利用
	//std::normal_distribution<> norm(50.0, 10.0);		// 平均50、分散値10の正規分布
	std::normal_distribution<> norm(0.0, 0.2);			// 平均が０なのでマイナスの値も含まれる

	for (int i = 0; i < 20; ++i){
		//std::cout << rand100(mt) << std::endl;
		//std::cout << rand2(mt) << std::endl;

		//std::cout << norm(mt) << std::endl;
		std::cout << norm(mt) << std::endl;
	}

	return 0;
}
