#include <iostream>
using namespace std;

// 問題１ 構造体Personを作成し、２人分の情報を入出力する
struct Person{
	int age;
	double weight;
	double height;
};

// 問題２ 構造体へのポインタを引数として受け取り、
//　　　　年齢を１つ増やす関数の作成、実行
void aging(Person* p, int num);

int main(){
	int num;
	Person* pPer;

	cout << "何人分の情報を入力しますか？" << endl;
	cin >> num;

	// 必要な数だけPerson型の配列を用意
	pPer = new Person[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << " 人目の人の年齢を入力して下さい。" << endl;
		cin >> pPer[i].age;
		cout << i + 1 << " 人目の人の体重を入力して下さい。" << endl;
		cin >> pPer[i].weight;
		cout << i + 1 << " 人目の人の身長を入力して下さい。" << endl;
		cin >> pPer[i].height;
	}

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "人目：年齢" << pPer[i].age 
			<< " 体重は" << pPer[i].weight 
			<< " 身長は" << pPer[i].height << "です。" << endl;
	}

	// 問題２------------------------------
	cout << "１年経過しました。" << endl;
	for (int i = 0; i < num; i++)
	{
		aging(&pPer[i], i);
	}

	return 0;
}

void aging(Person* p, int num){
		cout << num + 1 << "人目：年齢" << p->age + 1
			<< " 体重は" << p->weight
			<< " 身長は" << p->height << "です。" << endl;
}