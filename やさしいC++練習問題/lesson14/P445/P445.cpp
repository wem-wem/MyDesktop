#include "Base1.h"
#include "Base2.h"
#include <iostream>
using namespace std;

// ���d�p���ɂ���------------------------------

// Derived�N���X�̐錾
class Derived : public Base1, public Base2{
protected:
	int dr;
public:
	Derived(int d = 0){ dr = d; }
	void showDr();
};

void Derived::showDr()
{
	cout << "dr��" << dr << "�ł��B" << endl;
}


int main(){
	Derived drv;

	//drv.showBs1();
	//drv.showBs2();

	// ���������o��������{�N���X�̗��p
	drv.Base1::showBs();
	drv.Base2::showBs();
	drv.showDr();

	return 0;
}
