#include <iostream>
#include <cstdio>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

int main() {
	int r, c, b[110][110];
	cin >> r >> c;
	rep(i,r) {
		rep(j,c) {
			cin >> b[i][j];
		}
	}
	rep(i,r) {
		int sr = 0;
		rep(j,c) {
			sr += b[i][j];
			cout << b[i][j] << " ";
		}
		cout << sr << endl;
	}
	int total = 0;
	rep(i,c) {
		int sc = 0;
		rep(j,r) {
			sc += b[j][i];
		}
		total += sc;
		cout << sc << " ";
	}
	cout << total << endl;
	return 0;
}