#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
 
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define speedhack() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define form(i, n) for (size_t i = 0; i < size_t(n); ++i)
#define forn(i, n) for (size_t i = 1; i <= size_t(n); ++i)
template<class T> using ordered_set=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
long long mod(long long a, long long b) { return (a%b+b)%b; }
long long gcd(long long x, long long y) { return __gcd(x, y); }
long long lcm(long long x, long long y) { return x * 1ll * y / gcd(x, y); }
 
 
const long long MAXN = 1e9 + 9;
const long long SIZE = 2e5 + 5;
const long long MOD = 1e9 + 7;

int N;
string s, arr[] = {"AC", "WA", "TLE", "RE"};
map<string, int> cnt;

int main() { speedhack()
	
	cin >> N;

	forn (i, N) {
		cin >> s;
		cnt[s]++;
	}

	for (int i = 0; i < 4; i++) 
		cout << arr[i] << " x " << cnt[arr[i]] << endl;
		
	

	return 0;
}