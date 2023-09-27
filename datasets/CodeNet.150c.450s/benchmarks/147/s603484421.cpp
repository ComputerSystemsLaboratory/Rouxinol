#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ss(x) (int) x.size()
#define fi first
#define se second
#define cat(x) cerr << #x << " = " << x << endl
#define rep(i, j, n) for (int i = j; i <= n; ++i)
#define per(i, j, n) for (int i = n; j <= i; --i)
#define all(x) x.begin(), x.end()
#define ld long double

using namespace std;	

const int N = 1e5;

int ans[N];

int main() {	
	int n;
	scanf ("%d", &n);
	rep(i, 1, 100)
		rep(j, 1, 100)
			rep(k, 1, 100)
				ans[i * i + j * j + k * k + i * j + i * k + j * k]++;
	rep(i, 1, n)
		printf ("%d\n", ans[i]);
	return 0;
}
