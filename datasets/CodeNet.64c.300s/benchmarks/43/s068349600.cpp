#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int a = 0, b = 0;
	for (int c = 0; c < 4; c++) {
		int d;
		cin >> d;
		a += d;
	}
	for (int c = 0; c < 4; c++) {
		int d;
		cin >> d;
		b += d;
	}
	cout << max(a, b) << endl;
}