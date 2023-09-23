#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int d1[10] = { 20,19,20,19,20,19,20,19,20,19 };
	int d2[10] = { 20,20,20,20,20,20,20,20,20,20 };
	int Sd1 = 20 * 10 - 5;
	int Sd2 = 20 * 10;
	int SD = 196471;

	int n; cin >> n;
	int Y, M, D;
	int Sum = 0;
	for (int i = 0; i < n; i++) {
Sum = 0;
		cin >> Y >> M >> D;
		Sum += (Y - 1) / 3 * Sd2 + ((Y - 1) - (Y - 1) / 3)*Sd1;

		if (Y % 3 != 0) {
			for (int j = 0; j < M - 1;j++) {
				Sum += d1[j];
			}
			Sum += D;
		}
		else {
			for (int j = 0; j < M - 1;j++) {
				Sum += d2[j];
			}
			Sum += D;
		}
		cout << SD - Sum << endl;
	}
}