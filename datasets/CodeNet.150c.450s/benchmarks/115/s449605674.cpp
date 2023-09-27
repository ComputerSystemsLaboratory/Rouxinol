#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define SENTINEL (-1)
#define M (1001)

// ia, ib以降のindexに対するLCSを返す
// (ia, ib)に対するLCSがわかっているとき, (ia-1, ib), (ia, ib-1)
// に対するLCSは, a[ia-1] == a[ib],...であれば+1される....
// と考えたくなるが, iaとibでカウントされている場合, ダブルカウントになってしまうから,
// 必ずしもそうとは言えない.
// X: abcbdab
// Y: bdcaba
// 1-originで考えると,
// LCS(7,6,X,Y) = 0
// LCS(6,6,X,Y) = 1
// LCS(5,5,X,Y) = 1
// LCS(4,5,X,Y) = 2
// ... ????
// 部分問題に分解したい
// X: abc
// Y: ac
// -> 2
// X[3],Y[2] -> 1
// X[2],Y[2] -> 
// lcs(i,j)
// : if a[i] == b[j] => lcs(i,j) = lcs(i-1,j-1) + 1
// : else lcs(i,j) = max ( lcs(i-1,j), lcs(i, j-1) )
// lcs(0,0) := 0
// lcs(

int lcs(int i, int j, string &a, string &b, int memo[][M]) {
	if (i==0 || j==0) {
		memo[i][j] = 0;
		return 0;
	}
	if (memo[i][j] != SENTINEL) {
		return memo[i][j];
	}
	// i, j as 1-origin index
	if (a[i-1] == b[j-1]) {
		memo[i][j] = lcs(i-1, j-1, a, b, memo) + 1;
	} else {
		memo[i][j] = max(lcs(i-1,j,a,b,memo), lcs(i,j-1,a,b,memo));
	}
	return memo[i][j];
}

// この多次元配列の書き方は汎用性がなくて嫌
void fill(int a[][M], int size1, int size2, int v) {
	for (int i=0;i<size1;++i) {
		for (int j=0;j<size2;++j) {
			a[i][j] = v;
		}
	}
}

int main () {
	int q;
	cin >> q;
	int LCS[1001][M];
	fill(LCS, 1001, 1001, SENTINEL);// -1 is sentinel
	vector<int> res;
	for (int i=0; i<q; ++i) {
		string a, b;
		cin >> a >> b;
		res.push_back(lcs(a.size(),b.size(),a,b,LCS));
		fill(LCS, M, M, SENTINEL);
	}
	for (auto i : res) {
		cout << i << endl;
	}
	return 0;
}


