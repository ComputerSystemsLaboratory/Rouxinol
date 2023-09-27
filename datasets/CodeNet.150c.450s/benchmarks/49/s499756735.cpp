#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,s,n) for(int i=(int)(s);i<(int)(n);i++)


int main() {
	cin.sync_with_stdio(false);
	vector<int>ans;
	while (1) {
		int n;
		int p[100];
		int p_min = 1000;
		int p_max = 0;
		int sum = 0;
		cin >> n;
		if (n == 0) {
			break;
		}
		rep(i, n) {
			cin >> p[i];
			p_min = min(p_min, p[i]);
			p_max = max(p_max, p[i]);
			sum += p[i];
		}
		sum = sum - p_min - p_max;
		sum /= (n - 2);
		ans.push_back(sum);
	}
	rep(i, ans.size()) {
		cout << ans[i] << endl;
	}

	return 0;
}