#include <bits/stdc++.h>
using namespace std;

class LinearSearch {
public:
	int n, q;
	vector< int > S, T;
	
	LinearSearch() {}
	
	void solve() {
		int ans = 0;
		
		for (int i = 0; i < q; ++i) {
			int tar = T[i];
			
			for (int j = 0; j < n; ++j) {
				if (S[j] == tar) {
					++ans;
					break;
				}
			}
		}
		
		cout << ans << endl;
	}
};

int main() {
	LinearSearch ls;
	
	cin >> ls.n;
	ls.S.assign(ls.n, 0);
	for (int i = 0; i < ls.n; ++i) cin >> ls.S[i];
	
	cin >> ls.q;
	ls.T.assign(ls.q, 0);
	for (int i = 0; i < ls.q; ++i) cin >> ls.T[i];
	
	ls.solve();
}