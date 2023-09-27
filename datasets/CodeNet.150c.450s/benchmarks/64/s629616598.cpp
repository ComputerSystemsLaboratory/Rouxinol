#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

//void b_search(bool &flag, vector<int> a, int n, int m, int sum, int i){
//	if (sum == m) flag = true;
//	if (i == n || sum == m) return;
//	if (sum + a[i] <= m) b_search(flag, a, n, m, sum + a[i], i + 1);
//	b_search(flag, a, n, m, sum, i + 1);
//	
//}
//
//void solve(){
//	bool flag;
//	int n, q, mi;
//	cin >> n;
//	vector<int> A(n);
//	for (int i = 0; i < n; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//	cin >> q;
//	for (int i = 0; i < q; i++){
//		cin >> mi;
//		flag = false;
//		b_search(flag, A, n, mi, 0, 0);
//		if (flag) cout << "yes" << endl;
//		else cout << "no" << endl;
//	}
//}

void solve(){
	bool flag;
	int n, q, ai, mi, max = 0;
	bool dp[2000];
	fill(dp, dp + 2000, false);
	dp[0] = true;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> ai;
		for (int j = max; j >= 0; j--){
			if (dp[j]) dp[j + ai] = true;
		}
		max += ai;
	}
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> mi;
		if (dp[mi]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

signed main(){
	solve();
}