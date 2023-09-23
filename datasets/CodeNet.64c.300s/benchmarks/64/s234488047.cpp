#include <iostream>
using namespace std;

int main(void) {

	//??\???
	int x, y;
	cin >> x >> y;

	int a, b;
	if(x > y) {
		a = x;
		b = y;
	} else {
		a = y;
		b = x;
	}

	while(a >= b) {
		int tmp1 = a % b;
		int tmp2 = b;

		//cout << "tmp " << tmp1 << " " << tmp2 << endl;

		if(tmp1 > tmp2) {
			a = tmp1;
			b = tmp2;
		} else {
			a = tmp2;
			b = tmp1;
		}
		//cout << "ab " << a << " " << b << endl;

		if(b==0)	break;
	}

	cout << a << endl;

	return 0;
}