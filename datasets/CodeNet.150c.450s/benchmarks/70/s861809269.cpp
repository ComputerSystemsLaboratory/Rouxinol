#include "bits/stdc++.h"
using namespace std;

int main() {
	long long X[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string Y[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	long long M, D;
	while (cin >> M >> D) {
		if (M == 0 && D == 0) return 0;
		M--, D--;
		long long NM = 0, ND = 0, COUNT = 3;
		while (1) {
			if (NM == M && ND == D) break;
			COUNT++;
			ND++;
			if (ND == X[NM]) NM++, ND = 0;
		}
		cout << Y[COUNT % 7] << endl;
	}
}
