#include <iostream>
using namespace std;

// ���Q �����l������킷�N���XPoint�̍쐬
class Point{
private:
	int x;
	int y;

public:
	int getX(){ return x; }
	int getY(){ return y; }

	void setX(int a);
	void setY(int b);
};

void Point::setX(int a){
	if (a >= 0 && a <= 10){
		Point::x = a;
	}
	else{
		Point::x = 0;
	}
}

void Point::setY(int b){
	if (b >= 0 && b <= 10){
		Point::y = b;
	}
	else{
		Point::y = 0;
	}
}

int main(){
	// ���R ���Q�ō�����N���X�𗘗p���ē��o��
	Point* point = new Point();
	int a, b;

	cout << "x���W����͂��ĉ������B" << endl;
	cin >> a;
	point->setX(a);

	cout << "y���W����͂��ĉ������B" << endl;
	cin >> b;
	point->setY(b);

	cout << "���W��(" << point->getX() << "," << point->getY() << ")�ł��B" << endl;

	return 0;
}