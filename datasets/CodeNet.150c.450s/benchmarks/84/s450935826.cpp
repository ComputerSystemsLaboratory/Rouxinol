#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int MAX = 200001;
vi v, L(MAX), R(MAX);
ll merge(int left,int mid,int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	ll cnt = 0;
	rep(i, 0, n1) L[i] = v[left+i];
	rep(i, 0, n2) R[i] = v[mid+i];
	L[n1] = R[n2] = 1e9;
	int i = 0, j = 0;
	rep(k, left, right) {
		if(L[i] < R[j]) {
			v[k] = L[i];
			++i;
		} else {
			v[k] = R[j];
			++j;
			cnt += n1 - i;
		}
	}
	return cnt;
}
ll mergesort(int left,int right)
{
	ll cnt = 0;
	if(left + 1 < right) {
    	int mid = (left + right) / 2;
    	cnt += mergesort(left, mid);
    	cnt += mergesort(mid, right);
    	cnt += merge(left, mid, right);
	}
	return cnt;
}
int main() {
	int n; cin >> n;
	v.resize(n); rep(i, 0, n) cin >> v[i];
	P(mergesort(0, n));
	return 0;
}