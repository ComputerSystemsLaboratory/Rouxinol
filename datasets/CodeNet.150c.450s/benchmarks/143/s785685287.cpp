#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
 
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define speedhack() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define form(i, n) for (size_t i = 0; i < size_t(n); ++i)
#define forn(i, n) for (size_t i = 1; i <= size_t(n); ++i)
template<class T> using ordered_set=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll mod(ll a, ll b) { return (a%b+b)%b; }
ll gcd(ll x, ll y) { return __gcd(x, y); }
ll lcm(ll x, ll y) { return x * 1ll * y / gcd(x, y); }
 
 
const ll MAXN = 1e9 + 9;
const ll SIZE = 1e5 + 5;
const ll MOD  = 1e9 + 7;

ll N, M, sum, A, B, C, cnt[SIZE];

int main() { speedhack()

	cin >> N;
	forn (i, N) {
		cin >> A;
		sum += A;
		++cnt[A];
	}

	cin >> M;
	forn (i, M) {
		cin >> B >> C;
		sum -= cnt[B] * B;
		sum += cnt[B] * C;

		cnt[C] += cnt[B];
		cnt[B] = 0;
		cout << sum << endl;
	}
	
	
	return 0;
}