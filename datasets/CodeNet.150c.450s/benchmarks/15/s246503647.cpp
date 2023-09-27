#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(){
	int n, q, cnt = 0;
	cin >> n;
	vector<int> S(n);
	for (int i = 0; i < n; i++) cin >> S[i];
	cin >> q;
	vector<int> T(q);
	for (int i = 0; i < q; i++) cin >> T[i];
	sort(S.begin(), S.end());
	for (int i = 0; i < q; i++) {
		if (binary_search(S.begin(), S.end(), T[i])) cnt++;
	}
	cout << cnt << endl;
	return 0;
}

signed main(){
	solve();
}