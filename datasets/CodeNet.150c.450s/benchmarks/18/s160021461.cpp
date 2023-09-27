#include <stdio.h>
#include <iostream>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
int n;
int main() {
	int k = 100000;
	cin >> n;
	rep(i,n) {
		int r = (int)(k * 1.05) % 1000;
		if(r == 0) {
			k = (int)((k * 1.05) / 1000) * 1000;
		} else {
			k = (int)((k * 1.05) / 1000 + 1) * 1000;		
		}
	}
	cout << k << endl;
	return 0;
}