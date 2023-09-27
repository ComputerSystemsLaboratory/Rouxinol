#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m], b[m], c, i, j;
	
	// input
	rep(i,n) {
		rep(j,m) {
			cin >> a[i][j];
		}
	}
	rep(i,m) {
		cin >> b[i];
	}
	rep(i,n) {
		c = 0;
		rep(j,m) c += b[j] * a[i][j];
		cout << c;
		if (i < n-1) cout << "\n"; 
	}
	cout << endl;
	return 0;
}