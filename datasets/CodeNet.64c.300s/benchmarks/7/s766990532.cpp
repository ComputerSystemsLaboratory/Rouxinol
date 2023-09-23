#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

const int INF = 1e9;

int main() {
	int n;
	char m;
	int x;
	bool u[4][13];
	rep(i,0,4) rep(j,0,13) u[i][j] = false;

	cin >> n;

	rep(i,0,n) {
			cin >> m;
			cin >> x;
			if (m == 'S') {
				u[0][x - 1] = true;
			} else if (m == 'H') {
				u[1][x - 1] = true;
			} else if (m == 'C') {
				u[2][x - 1] = true;
			} else {
				u[3][x - 1] = true;
			}
	}
	rep(i,0,13) {
			if (!u[0][i]) {
					cout << "S " << i + 1 << endl;
			}
	}
	rep(i,0,13) {
			if (!u[1][i]) {
					cout << "H " << i + 1 << endl;
			}
	}
	rep(i,0,13) {
			if (!u[2][i]) {
					cout << "C " << i + 1 << endl;
			}
	}
	rep(i,0,13) {
			if (!u[3][i]) {
					cout << "D " << i + 1 << endl;
			}
	}

}