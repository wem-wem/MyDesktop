#include <iostream>
using namespace std;

//// –â‘è‚R inline‰» 

//// –â‘è‚P ‚Qæ‚É‚·‚éˆ×‚ÌŠÖ”(intŒ^w’è)
//inline int square(const int i){
//	return i * i;
//}
//
// –â‘è‚Q ‚Qæ‚É‚·‚éˆ×‚ÌŠÖ”(doubleŒ^w’è)
//inline double square(const double d){
//	return d * d;
//}

// –â‘è‚S ŠÖ”ƒeƒ“ƒvƒŒ[ƒg
template <class T>
T square(T x){
	return x * x;
}

int main(){
	int num;
	double dnum;

	cout << "®”‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢B" << endl;
	cin >> num;
	cout << num << "‚Ì‚Qæ‚Í" << square(num) << "‚Å‚·B" << endl;

	cout << "­”‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢B" << endl;
	cin >> dnum;
	cout << dnum << "‚Ì‚Qæ‚Í" << square(dnum) << "‚Å‚·B" << endl;

	return 0;
}

