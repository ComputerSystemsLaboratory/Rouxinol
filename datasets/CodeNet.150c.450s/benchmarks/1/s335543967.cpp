#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define INF 1<<30
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

vi getLIS(vi a)
{
	int n = a.size();
	vi dp(n, INF);
	rep(i, 0, n) *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
	int d = distance(dp.begin(), lower_bound(dp.begin(), dp.end(), INF));
	dp.resize(d);
	return dp;
}

int main()
{
	int n; cin >> n;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	vi b = getLIS(a);
	//for (int c : b) cout << c << endl;
	cout << b.size() << endl;
}