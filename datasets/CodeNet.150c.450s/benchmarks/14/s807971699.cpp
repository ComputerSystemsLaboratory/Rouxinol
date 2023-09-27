#include <iostream>
#include <cmath>
using namespace std;

inline int getDigit(int n) {
	return (int)ceil(log10(n));
}

/*
void call(int n){
	int i = 1;
CHECK_NUM:
	int x = i;
	if ( x % 3 == 0 ){
		cout << " " << i;
		goto END_CHECK_NUM;
	}
INCLUDE3:
	if ( x % 10 == 3 ){
		cout << " " << i;
		goto END_CHECK_NUM;
	}
	x /= 10;
	if ( x ) goto INCLUDE3;
END_CHECK_NUM:
	if ( ++i <= n ) goto CHECK_NUM;

	cout << endl;
}
*/

int main() {
	int n;
	cin >> n;
	//call(n);

	for(int i = 1; i <= n; ++i) { 
		int x = i;
		if(x%3==0) {
			cout << " " << i;
			continue;
		}
		for(int j = 0; j < getDigit(i); ++j) {
			if(x%10==3) {
				cout << " " << i;
				break;
			}
			x /= 10;
		}

	}
	cout << endl;
	return 0;
}