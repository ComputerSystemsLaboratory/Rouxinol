#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n; cin >> n;

	int ans = INT_MIN;
	int MIN; cin >> MIN;

	for (int i = 1;i < n;i++){
		int tmp; cin >> tmp;
		ans = max(ans,tmp-MIN);
		MIN = min(MIN,tmp);
	}

	cout << ans << endl;

	return 0;

}

