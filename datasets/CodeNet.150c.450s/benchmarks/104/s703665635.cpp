#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int ans[30];
int main() {
	int w, n; cin >> w >> n;
	vector<P>vec;
	rep(i, n) {
		int a, b; scanf("%d,%d", &a, &b);
		vec.push_back(P(a, b));
	}
	for (int i = 1; i <= w; i++) {
		int pos = i;
		rep(j, vec.size()) {
			if (vec[j].first == pos)pos = vec[j].second;
			else if (vec[j].second == pos)pos = vec[j].first;
		}
		ans[--pos] = i;
	}
	rep(i, w) {
		cout << ans[i] << endl;
	}
	return 0;
}