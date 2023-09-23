#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[101][101];
int main() {
	int r, c; cin >> r >> c;
	rep(i, r)rep(j, c)cin >> a[i][j];
	rep(i, r) {
		rep(j, c)a[i][c] += a[i][j];
	}
	rep(i, c+1) {
		rep(j, r)a[r][i] += a[j][i];
	}
	rep(i, r + 1) {
		rep(j, c + 1) {
			if (j)cout << ' ';
			cout << a[i][j];
		}
		cout << endl;
	}
}