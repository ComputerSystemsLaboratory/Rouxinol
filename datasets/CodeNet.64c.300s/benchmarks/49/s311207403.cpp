#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	const int DAT_LIMIT = 200;
	int a,b;
	int cnt = 0;
	while(cin >> a >> b && cnt < DAT_LIMIT) {
		int c = a+b;
		int digit = 1;
		while(c / 10 != 0) {
			digit++;
			c = c / 10;
		}
		cout << digit << endl;
		cnt++;
	}
	return 0;
}