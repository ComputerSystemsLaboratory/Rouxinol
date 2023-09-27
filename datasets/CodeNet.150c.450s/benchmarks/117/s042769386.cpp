#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
int len = 500000;
vector<int>L(len / 2), R(len / 2);
int cnt(0);

void merge(vector<int>&a, int l, int mid, int r) {
	int n1 = mid - l;
	int n2 = r - mid;
	rep(i, 0, n1)L[i] = a[l + i];
	L[n1] = INF;
	rep(i, 0, n2)R[i] = a[mid + i];
	R[n2] = INF;
	int i(0), j(0);
	rep(k, l, r) {
		cnt++;
		if (L[i] < R[j])a[k] = L[i++];
		else a[k] = R[j++];
	}
}
void mergeSort(vector<int>&a, int l, int r) {
	if (r - l > 1) {
		int mid = (l + r) / 2;
		mergeSort(a, l, mid);
		mergeSort(a, mid, r);
		merge(a, l, mid, r);
	}
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	vector<int> v(N); rep(i, 0, N) { cin >> v[i]; }
	mergeSort(v, 0, N);
	rep(i, 0, N)cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
	cout << cnt << endl;
	return 0;
}