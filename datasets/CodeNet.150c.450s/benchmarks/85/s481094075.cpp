#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Matrix {
	int r,c;
};

long f(vector<Matrix> &m, int begin, int end, vector<vector<long> > &memo) {
	if (m.size() < 2 || (end - begin) < 2) return 0;
	if (memo[begin][end] != -1) {
		return memo[begin][end];
	}
	if ((end - begin) == 2) {
		return memo[begin][end] = m[begin].r * m[begin].c * m[begin+1].c;
	}
	long common = m[begin].r * m[end-1].c;
	long res	= common * m[begin+1].r + f(m,begin+1,end,memo);
	for (int i=2;i<(end-begin);++i) {
		long t = f(m,begin, begin+i,memo) + f(m,begin+i,end,memo) + common * m[begin+i].r;
		res = min(res, t);
	}
	return memo[begin][end] = res;
}

int main() {
	int n;
	cin >> n;
	vector<Matrix> M(n);
	vector<vector<long> > memo(n);
	for (int i=0;i<n;++i) {
		int r,c;
		cin >> r >> c;
		M[i].r = r; M[i].c = c;
		memo[i].resize(n+1);
		for (int j=0;j<memo[i].size();++j) memo[i][j] = -1;
	}
	cout << f(M, 0, M.size(), memo) << endl;
	return 0;
}


