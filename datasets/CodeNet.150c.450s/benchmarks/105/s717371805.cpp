#include"bits/stdc++.h"
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
typedef pair<int, int> P;
const long long inf = 1e17;
const int mod = 1000000007;

const int MAX_ROW = 61; // to be set appropriately
const int MAX_COL = 200; // to be set appropriately
struct BitMatrix {
	int H, W;
	bitset<MAX_COL> val[MAX_ROW];
	BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
	inline bitset<MAX_COL>& operator [] (int i) { return val[i]; }
};
int GaussJordan(BitMatrix &A, bool is_extended = false) {
	int rank = 0;
	for (int col = 0; col < A.W; ++col) {
		if (is_extended && col == A.W - 1) break;
		int pivot = -1;
		for (int row = rank; row < A.H; ++row) {
			if (A[row][col]) {
				pivot = row;
				break;
			}
		}
		if (pivot == -1) continue;
		swap(A[pivot], A[rank]);
		for (int row = 0; row < A.H; ++row) {
			if (row != rank && A[row][col]) A[row] ^= A[rank];
		}
		++rank;
	}
	return rank;
}

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res) {
	int m = A.H, n = A.W;
	BitMatrix M(m, n + 1);
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) M[i][j] = A[i][j];
		M[i][n] = b[i];
	}
	int rank = GaussJordan(M, true);

	// check if it has no solution
	for (int row = rank; row < m; ++row) if (M[row][n]) return -1;

	// answer
	res.assign(n, 0);
	for (int i = 0; i < rank; ++i) res[i] = M[i][n];
	return rank;
}
int solve(vector<int>V,int k) {
	BitMatrix A(61, (int)V.size());
	vector<int>b(61), res;
	rep(d, 61) {
		rep(i, V.size()) {
			if (V[i] & (1ll << d))A[d][i] = 1;
		}
		if (k&(1ll << d))b[d] = 1;
	}
	int rank = linear_equation(A, b, res);
	return rank;
}
signed main() {
	int t; cin >> t;
	rep(T, t) {
		int n; cin >> n;
		vector<int>a(n);
		rep(i, n)cin >> a[i];
		string s; cin >> s;
		vector<int>v;
		int flg = 0;
		if (s[n - 1] == '1')flg++;
		else {
			for (int i = n - 1; i >= 0; i--) {
				if (s[i] == '0')v.push_back(a[i]);
				else {
					if (solve(v, a[i]) == -1)flg = 1;
				}
			}
		}
		cout << flg << endl;
	}
}