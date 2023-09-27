#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

void call(int n) {
	int i = 1;
	do {
		//CHECK_NUM:
		int x = i, f = 0;
		if (x % 3 == 0) {
			cout << " " << i;
			f = 1;
		}
		do{
	//INCLUDE3:
		if (x % 10 == 3 && f == 0) {
			cout << " " << i;
			f = 1;
		}
		x /= 10;
		} while (x&&f == 0); //goto INCLUDE3;
	//END_CHECK_NUM:
	} while (++i <= n); //goto CHECK_NUM;

	cout << endl;
}

int main() {
	int n;
	cin >> n;
	call(n);
	return 0;
}