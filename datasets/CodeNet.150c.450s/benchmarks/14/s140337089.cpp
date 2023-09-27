#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

void call(int n) {
	int i = 1;
	int x;
	bool flg = false;
	while (1) {
		// CHECK_NUM
		x = i;
		if ( x % 3 == 0 ){
			cout << " " << i;
		}
		else {
			while (1) {
				// INCLUDE3
				if ( x % 10 == 3 ){
					cout << " " << i;
					flg = true;
				}
				else {
					x /= 10;
					if ( x ) {
						continue;
					}
					else {
						flg = true;
					}
				}
				if (flg == true) {
					break;
				}
			}
		}
		flg = false;
		// END_CHECK_NUM
		if ( ++i <= n ) {
			continue;
		}
		else {
			cout << endl;
			break;
		}
	}
}

int main(void)
{
	int n;
	cin >> n;
	call(n);
	return 0;
}
