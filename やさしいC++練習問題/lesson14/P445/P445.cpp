#include "Base1.h"
#include "Base2.h"
#include <iostream>
using namespace std;

// 多重継承について------------------------------

// Derivedクラスの宣言
class Derived : public Base1, public Base2{
protected:
	int dr;
public:
	Derived(int d = 0){ dr = d; }
	void showDr();
};

void Derived::showDr()
{
	cout << "drは" << dr << "です。" << endl;
}


int main(){
	Derived drv;

	//drv.showBs1();
	//drv.showBs2();

	// 同じメンバ名を持つ基本クラスの利用
	drv.Base1::showBs();
	drv.Base2::showBs();
	drv.showDr();

	return 0;
}
