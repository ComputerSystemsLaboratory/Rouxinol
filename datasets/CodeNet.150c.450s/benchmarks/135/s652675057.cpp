#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> P;
typedef vector<P> vP;

int main() {
	while (true) {


		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)return 0;
		vi x(3000009, 0);
		vi y(3000009, 0);
		x[0] = 1;
		y[0] = 1;
		vi h(max(n, m) + 1, 0);
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			int temp;
			cin >> temp;
			sum += temp;
			h[i] = sum;
		}
		for (int i = 0; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				x[h[j] - h[i]] += 1;
			}
		}
		sum = 0;
		for (int i = 1; i <= m; i++) {
			int temp;
			cin >> temp;
			sum += temp;
			h[i] = sum;
		}
		for (int i = 0; i <= m; i++) {
			for (int j = i + 1; j <= m; j++) {
				y[h[j] - h[i]] += 1;
			}
		}
		int ans = 0;
		for (int i = 1; i < 3000009; i++) {
			ans += x[i] * y[i];
		}
		cout << ans << endl;
	}
	return 0;
}