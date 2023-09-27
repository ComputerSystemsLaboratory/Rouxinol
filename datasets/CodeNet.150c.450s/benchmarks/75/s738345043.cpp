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
int H;
vi A;
inline void maxHeapify(int i) {
	int l = 2 * i;
	int r = 2 * i + 1;
	int largest = (l <= H && A[l] > A[i] ? l : i);
	if(r <= H && A[r] > A[largest]) largest = r;
	if(largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}
}
int main() {
	cin >> H;
	A.resize(H + 1); rep(i, 1, H + 1) cin >> A[i];
	rrep(i, H / 2, 0) maxHeapify(i);
	rep(i, 1, H + 1) cout << " " << A[i];
	cout << endl;
	return 0;
}