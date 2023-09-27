#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>
#include<queue>
using namespace std;
typedef long long ll;
int main()
{
	int n, m=0;
	while (cin >> n>>m,n+m){
		int h[1600], w[1600];
		for (int i = 1; i <= n; i++) {
			cin >> h[i];
			h[i] += h[i - 1];
		}
		for (int i = 1; i <= m; i++) {
			cin >> w[i];
			w[i] += w[i - 1];
		}
		vector<int> v1, v2;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				v1.push_back(h[j] - h[i - 1]);
			}
		}
		for (int i = 1; i <= m; i++) {
			for (int j = i; j <= m; j++) {
				v2.push_back(w[j] - w[i - 1]);
			}
		}
		int ans = 0;
		sort(v2.begin(), v2.end());
		for (int i = 0; i < v1.size();i++) {
			int a = v1[i];
			ans += upper_bound(v2.begin(), v2.end(), a) - lower_bound(v2.begin(), v2.end(), a);
		}
		cout << ans << endl;
	}

	return	0;
}



