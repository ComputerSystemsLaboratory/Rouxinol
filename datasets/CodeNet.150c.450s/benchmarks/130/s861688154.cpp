#include <cstdio>
#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int a[100][100], b[100], n, m;
int main() {
	cin >> n >> m;
	rep(i,n) {
		rep(j,m) {
			cin >> a[i][j];
		}
	}
	rep(i,m) {
		cin >> b[i];
	}
	rep(i,n) {
		int ret = 0;
		rep(j,m) {
			ret += a[i][j] * b[j];
		}
		cout << ret << endl;
	}
	return 0;
}