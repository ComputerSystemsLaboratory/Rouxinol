#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define allsort(v) sort(v.begin(),v.end())
const ll mod = 1e9 + 7;

int main() {
	cin.sync_with_stdio(false);
	int n,r;
	vector<int>ans;
	while (1) {
		cin >> n >> r;
		if (n == 0 && r == 0)break;
		vector<int>b(n), a(n);
		int p, c;
		rep(i, n)b[i] = n-i;
		rep(i, r) {
			cin >> p >> c;
			rep(j, c)a[j] = b[p - 1 + j];
			rep(j, p-1)a[c + j] = b[j];
			reps(j, p + c - 1, n)a[j] = b[j];
			rep(j, n)b[j] = a[j];			
		}
		ans.push_back(a[0]);

	}
	for (auto x : ans)cout << x << endl;
	return 0;
}