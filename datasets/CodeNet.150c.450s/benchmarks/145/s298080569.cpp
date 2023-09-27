#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,slong,nlong;
	vector<string> S;
	while (cin >> s) {
		S.push_back(s);
	}
	S[0][0] += 32;
	int sizeMAX = 0, ctr2 = 0;
	for (int i = 0; i < S.size(); i++) {
		int ctr1 = 0;
		for (int j = 0; j < S.size(); j++) {
			if (S[i] == S[j])ctr1++;
		}
		if (sizeMAX < S[i].size()) {
			slong = S[i]; sizeMAX = S[i].size();
		}
		if (ctr2 < ctr1) {
			ctr2 = ctr1; nlong = S[i];
		}
	}
	cout << nlong << " " << slong << endl;
	return 0;
}