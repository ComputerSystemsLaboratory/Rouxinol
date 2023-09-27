#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(); ios::sync_with_stdio(false);
	int n, r;
	while (true) {
		cin >> n >> r;
		if (n == 0 && r == 0) break;
		vector<int> card(n);
		iota(card.rbegin(), card.rend(), 1);

		vector<int> temp(n);
		int p, c;
		for (int i = 0; i < r;i++) {
			cin >> p >> c;
			for (int j = p - 1; j < p - 1 + c;j++) {
				temp[j - (p - 1)] = card[j];
			}
			for (int j = 0; j < p - 1;j++) {
				temp[j + c] = card[j];
			}
			for (int j = p + c - 1; j < n; j++) {
				temp[j] = card[j];
			}
			card = temp;
		}
		cout << card[0] << endl;
	}
}