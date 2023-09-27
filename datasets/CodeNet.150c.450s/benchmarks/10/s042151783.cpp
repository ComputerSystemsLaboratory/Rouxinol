#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a;
	int S[11][4] = { 0 };
	int H[11][4] = { 0 };
	int C[11][4] = { 0 };
	int D[11][4] = { 0 };
	for (int h = 1; h <= a; h++) {
		cin >> b >> c >> d >> e;
		if (b == 1) { S[d][c] += e; }
		if (b == 2) { H[d][c] += e; }
		if (b == 3) { C[d][c] += e; }
		if (b == 4) { D[d][c] += e; }
	}
	for (int h = 1; h <= 3; h++) {
		for (int i = 1; i <= 10; i++) { cout << ' ' << S[i][h]; }
		cout << endl;
	}
	for (int h = 1; h <= 20; h++) { cout << '#'; } cout << endl;
	for (int h = 1; h <= 3; h++) {
		for (int i = 1; i <= 10; i++) { cout << ' ' << H[i][h]; }
		cout << endl;
	}
	for (int h = 1; h <= 20; h++) { cout << '#'; } cout << endl;
	for (int h = 1; h <= 3; h++) {
		for (int i = 1; i <= 10; i++) { cout << ' ' << C[i][h]; }
		cout << endl;
	}
	for (int h = 1; h <= 20; h++) { cout << '#'; } cout << endl;
	for (int h = 1; h <= 3; h++) {
		for (int i = 1; i <= 10; i++) { cout << ' ' << D[i][h]; }
		cout << endl;
	}
}
