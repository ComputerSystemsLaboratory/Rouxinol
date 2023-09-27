#include "bits/stdc++.h"
using namespace std;
int main() {
	int a[101] = { 0 };
	int A;
	int M_C = 0;
	while (cin >> A) {
		a[A]++;
		M_C = max(M_C, a[A]);
	}
	for (int i = 1; i <= 100;i++) {
		if (a[i] == M_C) cout << i << endl;
	}
}