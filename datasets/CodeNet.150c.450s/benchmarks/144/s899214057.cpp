#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	int i, j, k;
	long a[n][m], b[m][l], c;
	
	// input
	rep(i,n) {
		rep(j,m) {
			cin >> a[i][j];
		}
	}
	rep(i,m) {
		rep(j,l) {
			cin >> b[i][j];
		}
	}

	// process
	rep(i,n) {
		rep(j,l) {
			c = 0;
			rep(k,m) {
				c += a[i][k] * b[k][j];
			}
			cout << c;
			if (j < l-1) cout << " "; 
			else if (i < n-1) cout << "\n";
		}
	}	
	cout << endl;
	return 0;
}