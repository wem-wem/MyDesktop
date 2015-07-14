#include "iostream"

using namespace std;
int main(){
	// 繰り返し・制御文
	cout << "１～１０までの偶数を出力します。" << endl;
	for (int i = 1; i <= 10; i++){
		if (i % 2 == 0){
			cout << i << endl;
		}
	}


	// 入力・計算
	int num = 1;	// whileの条件に使用する為に初期値を１に
	int total = 0;

	cout << "テストの点数を入力して下さい。(0で終了)" << endl;

	while (num){
		cin >> num;

		if (num != 0)
		{
			total = total + num;
		}

		// num に１が代入された時、合計表示とwhileのループを終了する。
		else
		{
			cout << "テストの合計点は" << total << "点です。" << endl;
		}
	}


	// 繰り返し分のネスト
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