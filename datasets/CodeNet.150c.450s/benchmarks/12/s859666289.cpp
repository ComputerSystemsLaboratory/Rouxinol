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
inline int parent(int i) { return i / 2; }
inline int left(int i) { return i * 2; }
inline int right(int i) { return i * 2 + 1; }
int main() {
	int H; cin >> H;
	vi A(H + 1); rep(i, 1, H + 1) cin >> A[i];
	rep(i, 1, H + 1) {
		cout << "node " << i << ": key = " << A[i] << ", ";
		if(parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
		if(left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
		if(right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
		cout << endl;
	}
	return 0;
}