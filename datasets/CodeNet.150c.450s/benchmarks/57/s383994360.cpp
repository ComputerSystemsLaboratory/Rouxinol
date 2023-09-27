#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

signed main() {
	int a, c; char b;
	while (1) {
		cin >> a >> b >> c;
		switch (b) {
		case '+':cout << a + c << endl; break;
		case '-':cout << a - c << endl; break;
		case '*':cout << a * c << endl; break;
		case '/':cout << a / c << endl; break;
		case '?': goto l;
		}
	}
l:;
}