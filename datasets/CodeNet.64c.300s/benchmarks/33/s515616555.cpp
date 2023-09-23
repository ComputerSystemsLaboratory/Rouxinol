#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include<algorithm>
//#include<cmath>
using namespace std;
int main() {
	int ans,b;
	char op;
	while (cin >> ans >> op >> b) {
		switch (op) {
		case'+':ans += b; break;
		case'-':ans -= b; break;
		case'*':ans *= b; break;
		case'/':ans /= b; break;
		case'?':return 0;
		}
		cout << ans << endl;
	}
	return 0;
}