#include <iostream>
using namespace std;

//// 問題２ ポインタを使った関数addの定義
//void add(int* x1, int* x2){
//	int add_score;
//	cout << "加算する点数を入力して下さい。" << endl;
//	cin >> add_score;
//	cout << add_score << "点加算しましたので" << endl;
//	cout << "科目１は" << *x1 + add_score << "点となりました。" << endl;
//	cout << "科目２は" << *x2 + add_score << "点となりました。" << endl;
//}

// 問題３ 参照を使った関数addの定義
void add(int& x1, int& x2){
	int add_score;
	cout << "加算する点数を入力して下さい。" << endl;
	cin >> add_score;
	cout << add_score << "点加算しましたので" << endl;
	cout << "科目１は" << x1 + add_score << "点となりました。" << endl;
	cout << "科目２は" << x2 + add_score << "点となりました。" << endl;
}


int main(){
	int x1, x2;
	cout << "２科目分の点数を入力して下さい。" << endl;
	cin >> x1 >> x2;

	//add(&x1, &x2);	// 問題２の関数を使う場合
	add(x1, x2);	// 問題３の関数を使う場合

	return 0;
}