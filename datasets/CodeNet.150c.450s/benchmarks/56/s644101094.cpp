#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	vector<int> a;
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	
	sort(a.begin(), a.end());
	int min = a[0];
	sort(a.rbegin(), a.rend());
	int max = a[0];
	ll sum = 0;
	for(int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	
	cout << min << " " << max << " " << sum << "\n";
	
	return 0;
}