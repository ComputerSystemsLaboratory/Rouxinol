#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[100][100], b[100];
int main() {
	int n, m; cin >> n >> m;
	rep(i, n)rep(j, m)cin >> a[i][j];
	rep(i, m)cin >> b[i];
	rep(i, n) {
		int sum = 0;
		rep(j, m)sum += a[i][j] * b[j];
		cout << sum << endl;
	}
}