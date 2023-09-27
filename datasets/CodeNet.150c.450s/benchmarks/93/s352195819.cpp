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
constexpr int MAX = 1e6;
int n;
vector<pair<char, int>> L(MAX / 2 + 2), R(MAX / 2 + 2);
inline void merge(vector<pair<char, int>> &a, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	rep(i, 0, n1) L[i] = a[left + i];
	rep(i, 0, n2) R[i] = a[mid + i];
	L[n1] = R[n2] = mp('Z', 1e9);
	int i = 0, j = 0;
	rep(k, left, right) {
		if(L[i].second <= R[j].second) {
			a[k] = L[i];
			++i;
		} else {
			a[k] = R[j];
			++j;
		}
	}
}
inline void mergeSort(vector<pair<char, int>> &a, int left, int right) {
	if(left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}
inline int partition(vector<pair<char, int>> &a, int p, int r) {
	int x = a[r].second;
	int i = p - 1;
	rep(j, p, r) {
		if(a[j].second <= x) {
			swap(a[++i], a[j]);
		}
	}
	swap(a[++i], a[r]);
	return i;
}
inline void quickSort(vector<pair<char, int>> &a, int p, int r) {
	if(p < r) {
		int q = partition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
}
int main() {
	cin >> n;
	vector<pair<char, int>> v, mv; v.reserve(100001);
	char s;
	int x;
	rep(i, 0, n) {
		cin >> s >> x;
		v.eb(mp(s, x));
	}
	mv.assign(all(v));
	quickSort(v, 0, n - 1);
	mergeSort(mv, 0, n);
	P(v == mv ? "Stable" : "Not stable");
	for(auto i : v) {
		cout << i.first << ' ' << i.second << endl;
	}
	return 0;
}