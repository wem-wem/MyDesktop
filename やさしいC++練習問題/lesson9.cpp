#include <iostream>
#include <string>
using namespace std;

// 関数側は配列の先頭アドレスを受け取れても
// 要素数は分からないので、要素数も引数にして渡す。
int max(int x[], int nx);

int length(char* str);

int count(char str[], char ch);

int main(){
	// 問題１------------------------------
	int score[5];
	cout << "テストの点数を入力して下さい。" << endl;
	// 配列の要素数を(配列全体の大きさ / 配列１つ分の大きさ)で求める
	int ns = sizeof(score) / sizeof(score[0]);
	for (int i = 0; i < ns; i++)
	{
		cin >> score[i];
	}
	cout << "最高点は" << max(score, ns) << "点です。" << endl;


	// 問題２------------------------------
	cout << "文字列を入力して下さい。" << endl;
	char str[10];
	cin >> str;
	cout << "文字列の長さは" << strlen(str) << "です。" << endl;

	// 問題３------------------------------
	char search_str;
	cout << "文字列から探す文字を入力して下さい。" << endl;
	cin >> search_str;
	cout << str << "の中に" << search_str << "は全部で" << count(str, search_str) << "個あります。" << endl;
	return 0;
}


// 問題１ 配列の中で最も大きな数字を返す関数int maxの作成
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


// 問題２ 文字列の長さを出力する関数int lengthの作成
int length(char* str){
	return strlen(str);
}


// 問題３ 文字列に指定した文字がいくつ入っているかを調べる関数int countの作成
int count(char str[], char ch){
	int cc = 0;
	for (int i = 0; i < strlen(str); i++){
		if (str[i] == ch){
			cc++;
		}
	}
	return cc;
}
