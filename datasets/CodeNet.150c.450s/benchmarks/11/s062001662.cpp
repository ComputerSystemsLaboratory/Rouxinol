#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int a, b; char c;
	cin >> a;
	int S[15] = { 0 };
	int H[15] = { 0 };
	int C[15] = { 0 };
	int D[15] = { 0 };
	for (int h = 1; h <= a; h++) {
		cin >> c >> b;
		if (c == 'S') { S[b]++; }
		if (c == 'H') { H[b]++; }
		if (c == 'C') { C[b]++; }
		if (c == 'D') { D[b]++; }
	}
	for (int h = 1; h <= 13; h++) {
		if (S[h] == 0) { cout << "S " << h << endl; }
	}
	for (int h = 1; h <= 13; h++) {
		if (H[h] == 0) { cout << "H " << h << endl; }
	}
	for (int h = 1; h <= 13; h++) {
		if (C[h] == 0) { cout << "C " << h << endl; }
	}
	for (int h = 1; h <= 13; h++) {
		if (D[h] == 0) { cout << "D " << h << endl; }
	}
}
