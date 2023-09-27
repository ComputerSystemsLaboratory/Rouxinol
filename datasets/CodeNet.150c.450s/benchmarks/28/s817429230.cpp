#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

bool b_search(int border, int n, int k, vector<int> w){
	int t = 0, i = 0;
	while(i < n && t < k){
		int sum = 0;
		while (sum + w[i] <= border && i < n) sum += w[i++];
		t++;
	}
	return i == n;
}

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> w(n);
	for (int i = 0; i < n; i++) cin >> w[i];
	long left = 0, right = 1000000000;
	while (left < right - 1){
		int mid = (left + right) / 2;
		if (b_search(mid, n, k, w)) right = mid;
		else left = mid;
	}
	if (b_search(left, n, k, w)) cout << left << endl;
	else cout << right << endl;
}

signed main(){
	solve();
}