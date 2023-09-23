#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(void) {
	int a,b;
	char op;

	while(1) {
		cin >> a >> op >> b;
		switch(op) {
			case '+':
			cout << a+b << endl;
			continue;
			case '-':
			cout << a-b << endl;
			continue;
			case '*':
			cout << a*b << endl;
			continue;
			case '/':
			cout <<  floor(a/b) << endl;
			continue;
			case '?':
			return 0;
			default:
			return 0;
		}
	}
	return 0;
}