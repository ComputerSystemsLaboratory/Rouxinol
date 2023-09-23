#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0510

int main() {
	int a = 0, b = 0;
	for (int i = 0; i < 4; i++) {
		int in;
		cin >> in;
		a += in;
	}
	for (int i = 0; i < 4; i++) {
		int in;
		cin >> in;
		b += in;
	}
	cout << (a > b ? a : b) << endl;
	return 0;
}