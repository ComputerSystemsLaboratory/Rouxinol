
using namespace std;
typedef long long ll;
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>

int main(){
	int N;
	cin >> N;
	vector<ll> ans;
	while (N!=0)
	{
		vector<ll> a;
		a.resize(N);
		for (int i = 0; i < N; i++) cin >> a[i];
		ll thismin = 1e10;
		for (int i = 0; i < N;i++) {
			for (int n = 0; n < N; n++) {
				if (n == i) continue;
				thismin = min(thismin, abs(a[i] - a[n]));
			}
		}
		ans.push_back(thismin);
		cin >> N;
	}
	for (int i = 0; i < ans.size();i++) {
		cout << ans[i] << endl;
	}
	return 0;
}