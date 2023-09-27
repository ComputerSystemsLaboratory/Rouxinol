#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main() {
	int a;
	while (cin >> a, a) {
		int A = 0, B = 0;
		for (int b = 0; b < a; b++) {
			int c, d;
			cin >> c >> d;
			if (c > d)A += c + d;
			else if (c < d)B += c + d;
			else { A += c; B += d; }
		}
		cout << A << " " << B << endl;
	}
}