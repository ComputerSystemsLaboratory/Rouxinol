#include <bits/stdc++.h>
using namespace std;

signed main() {
	string inp, s;
	while(getline(cin, inp)) {
		s += inp;
	}
	
	const int N = 26;

	for (int i = 0; i < N; ++i) {
		char alp = (char)('a' + i), ALP = (char)('A' + i);
		cout << alp << " : " << count(s.begin(), s.end(), alp) + count(s.begin(), s.end(), ALP) << endl;
	}
}

