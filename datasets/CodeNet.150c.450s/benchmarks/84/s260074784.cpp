#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int MAX = 2e6;
vll L(MAX / 2 + 2), R(MAX / 2 + 2);
ll cnt = 0;
inline void merge(vll &a, ll left, ll mid, ll right) {
	ll n1 = mid - left;
	ll n2 = right - mid;
	rep(i, 0, n1) L[i] = a[left + i];
	rep(i, 0, n2) R[i] = a[mid + i];
	L[n1] = R[n2] = 1e9;
	ll i = 0, j = 0;
	rep(k, left, right) {
		if(L[i] <= R[j]) {
			a[k] = L[i];
			++i;
		} else {
			a[k] = R[j];
			++j;
			cnt = cnt + n1 - i;
		}
	}
}
inline void mergeSort(vll &a, ll left, ll right) {
	if(left + 1 < right) {
		ll mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}
int main() {
	int n; cin >> n;
	vll a(n); rep(i, 0, n) cin >> a[i];
	mergeSort(a, 0, n);
	P(cnt);
	return 0;
}