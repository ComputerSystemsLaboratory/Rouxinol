#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,tmp;
	cin >> n;
	vector<int> ans(10500,0);
	for (int i = 1; i < 105; i++) {
		for (int j = 1; j < 105; j++) {
			for (int k = 1; k < 105; k++) {
				tmp = i * i + j * j + k * k + i * j + j * k + k * i;
				if (tmp <= 10050) {
					ans.at(tmp) = ans.at(tmp)+ 1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans.at(i+1) << endl;
	}
}
