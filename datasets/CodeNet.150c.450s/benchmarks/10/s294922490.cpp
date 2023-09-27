#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int cnt[4][3][10];
int main() {
	int n; cin >> n;
	rep(i, n) {
		int b, f, r, v; cin >> b >> f >> r >> v; b--; f--; r--;
		cnt[b][f][r] += v;
	}
	rep(i, 4) {
		rep(j, 3) {
			rep(k, 10) {
				cout << ' ' << cnt[i][j][k];
			}
			cout << endl;
		}
		if (i < 3) {
			rep(j, 20)cout << '#';
			cout << endl;
		}
	}
}