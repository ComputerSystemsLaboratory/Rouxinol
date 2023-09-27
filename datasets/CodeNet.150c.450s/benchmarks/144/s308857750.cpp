#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int a[100][100], b[100][100], n, m, l;
int main() {
    cin >> n >> m >> l;
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
    rep(i,n) {
        rep(j,l) {
			ll ret = 0;
			rep(k,m) {
		        ret += a[i][k] * b[k][j];
	        }
			cout << ret;
			if(j != l - 1) cout << " ";
		}
		cout << endl;
    }
	return 0;
}