#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define AB_BHI_NI_DEGI                \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define int long long
#define pb push_back
#define N 100009
#define inf 1e18
const double PI = 3.141592653589793238462643383279;
int mod = 1e9 + 7;
//int mod = 998244353;
#define P pair<int, int>
#define F first
#define S second
#define ll long long
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define ld long double

#define ordered_set tree<P, null_type, less<P>, rb_tree_tag, tree_order_statistics_node_update>

int n;
int a[210];
string s;

int32_t main()
{
	AB_BHI_NI_DEGI
	int T;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cin >> s;
		vi v;
		int x = 0, y = 0;
		for (int i = n - 1; ~i; i--)
		{
			for (auto p : v)
				a[i] = min(a[i], a[i] ^ p);
			v.pb(a[i]);
			x |= s[i] == '1' && a[i];
		}
		cout << x << "\n";
	}

	return 0;
}