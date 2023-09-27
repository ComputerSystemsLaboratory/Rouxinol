#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define all(c) (c).begin(),(c).end()
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define TRACE
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

const ll inf = 2e18;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;

const int LOG_A = 61;

int basis[LOG_A];
int sz;

void insertVector(int mask) {
	for(int i = 0; i < LOG_A; i++) {
		if((mask & (1LL << i)) == 0) {
			continue;
		}
		if(!basis[i]) {
			basis[i] = mask;
			++sz;
			return;
		}
		mask ^= basis[i];
	}
}

signed main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	while(t--) {
		memset(basis, 0, sizeof(basis));
		sz = 0;
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;
		int ans = 0;
		for(int i = n - 1; i >= 0; i--) {
			if(s[i] == '0') {
				insertVector(a[i]);
			}
			else {
				for(int j = 0; j < LOG_A; j++) {
					if(a[i] & (1LL << j)) {
						a[i] ^= basis[j];
					}
				}
				if(a[i]) {
					ans = 1;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}