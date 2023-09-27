#include <string.h>
#include <iostream>
#include <queue>
#include <complex>
#include <functional>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

typedef complex<double> P;
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ( a.real(), b.real() ) && EQ( a.imag(), b.imag() ) )

#define rep(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,n) for(int i=a;i<=n;i++)

//---------------------------------------------------------------------
struct Point {
	int x, y;
};
struct Oridir {
	char o;
	int d;
};
int n, m;
bool check[20];

vector<Point> juel(20);
vector<Oridir> mov(30);

int main() {
	while (cin >> n, n) {
		memset(check, false, sizeof(check));
		rep(i, n) cin >> juel[i].x >> juel[i].y;
		cin >> m;
		rep(i, m) cin >> mov[i].o >> mov[i].d;
		//????????????

		int x = 10, y = 10;
		rep(i, m) {
			while (mov[i].d--) {
				switch (mov[i].o) {
				case 'N': y++; break;
				case 'S': y--; break;
				case 'E': x++; break;
				case 'W': x--; break;
				default: break;
				}
				rep(j, n) {
					if (check[j]) continue;
					if (x == juel[j].x && y == juel[j].y) check[j] = true;
				}
			}
		}

		int suc = true;
		rep(j, n) {
			if (!check[j]) {
				suc = false;
				cout << "No" << endl;
				break;
			}
		}
		if (suc) cout << "Yes" << endl;
	}
	return 0;
}