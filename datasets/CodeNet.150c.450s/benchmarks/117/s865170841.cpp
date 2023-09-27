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
int n, cnt = 0;
vi v;
inline void merge(int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	vi L(n1 + 1), R(n2 + 1);
	rep(i, 0, n1) {
		L[i] = v[left + i];
	}
	rep(i, 0, n2) {
		R[i] = v[mid + i];
	}
	L[n1] = R[n2] = 1e9;
	int i = 0, j = 0;
	rep(k, left, right) {
		++cnt;
		if(L[i] <= R[j]) {
			v[k] = L[i];
			++i;
		} else {
			v[k] = R[j];
			++j;
		}
	}
}
inline void mergeSort(int left, int right) {
	if(left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}
int main() {
	cin >> n;
	v.resize(n); rep(i, 0, n) cin >> v[i];
	mergeSort(0, n);
	rep(i, 0, n) cout << v[i] << (i + 1 == n ? "\n" : " ");
	P(cnt);
	return 0;
}