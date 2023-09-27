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
map<char, int> mc;
inline void bubbleSort(vs& a, int n) {
	rep(i, 0, n) {
		rrep(j, n - 1, i) {
			if(a[j][1] < a[j - 1][1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
}
inline void selectionSort(vs& a, int n) {
	rep(i, 0, n - 1) {
		int minj = i;
		rep(j, i, n) {
			if(a[j][1] < a[minj][1]) minj = j;
		}
		if(i != minj) {
			swap(a[i], a[minj]);
		}
	}
}
int main() {
	rep(i, 0, 4) mc["SHCD"[i]] = i;
	int n; cin >> n;
	vs v1(n); rep(i, 0, n) cin >> v1[i];
	vs v2(v1);
	bubbleSort(v1, n);
	rep(i, 0, n) cout << v1[i] << (i + 1 == n ? "\n" : " ");
	P("Stable");
	selectionSort(v2, n);
	rep(i, 0, n) cout << v2[i] << (i + 1 == n ? "\n" : " ");
	P(v1 == v2 ? "Stable" : "Not stable");
	return 0;
}