#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, r;
	while (cin >> n >> r, n&&r) {
		vector<int> pc(n);
		for (int i = 0; i < n; i++) pc[i] = n-i;
		for (int i = 0; i < r; i++) {
			int p, c; cin >> p >> c;
			vector<int> tmp(c);
			for (int j = 0; j < c; j++) {
				tmp[j] = pc[p-1+j];
			}
			for (int j = p-2; j >= 0; j--) {
				pc[j+c] = pc[j];
			}
			for (int j = 0; j < tmp.size(); j++) {
				pc[j] = tmp[j];
			}
		}
		cout << pc[0] << endl;
	}

	return 0;
}