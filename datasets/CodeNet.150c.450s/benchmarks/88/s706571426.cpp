#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair <int, int> P;



int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	ll h, w;
	vector<ll> v;
	for (ll i = 1; i < 150; i++) {
		for (ll j = i + 1; j <= 150;j++) {
			v.push_back((i * i + j * j)*1000+i);
		}
	}
	sort(v.begin(), v.end());
	cin >> h >> w;
	while (h!=0&&w!=0) {
		ll z = (h * h + w * w) * 1000 + h;
		auto ans = upper_bound(v.begin(), v.end(), z);
		ll H = *ans % 1000;
		ll S = *ans / 1000 - H * H;
		
		cout << H << " ";
		for (int i = 1; i <= 150; i++) {
			if (S == i * i)cout << i << endl;
		}
		cin >> h >> w;
	}
}
