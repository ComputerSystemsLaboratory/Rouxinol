#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int q;
	vector<int> res;
	cin >> q;
	res.resize(q);
	for (int i = 0; i < q; i++) {
		int L[1001][1001];
		string x, y;
		cin >> x >> y;
		for (int j = 0; j <= x.length(); j++) {
			for (int k = 0; k <= y.length(); k++) {
				if (j == 0 || k == 0)
					L[j][k] = 0;
				else if (x.at(j-1) == y.at(k-1))
					L[j][k] = L[j - 1][k - 1] + 1;
				else
					L[j][k] = max(L[j][k - 1], L[j - 1][k]);
			}
		}
		res[i] = L[x.length()][y.length()];
	}
	for (int i = 0; i < q; i++)
		cout << res[i] << endl;
}