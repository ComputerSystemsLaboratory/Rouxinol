#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1e9;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

/* struct P {
	int x, y, n;
	P(int n, int x, int y):n(n), x(x), y(y){}
	P(){}
}; */


/** Problem0558 : Cheese **/
int main()
{
	int H, W, N; cin>>H>>W>>N;
	char field[1000][1000];
	int sx, sy;
	rep(i, H) {
		rep(j, W) {
			cin>>field[j][i];
			if (field[j][i] == 'S') {
				sx = j, sy = i;
			}
		}
	}
	
	int ans=0;
	for (int i=0; i<N; i++) {
		queue<P> Q;
		int vis[1000][1000] = {0};
		Q.push(P(sx, sy));
		vis[sx][sy] = 0;
		
		while (Q.size()) {
			P p = Q.front(); Q.pop();
			if (field[p.first][p.second] == i+1+'0') {
				ans += vis[p.first][p.second];
				sx = p.first, sy = p.second;
				break;
			}
			
			for (int i=0; i<4; i++ ) {
				int nx = p.first+dx[i], ny = p.second+dy[i];
				if_range(nx, ny, W, H) {
					if (vis[nx][ny] == 0 && field[nx][ny]!='X') {
						vis[nx][ny] = vis[p.first][p.second]+1;
						Q.push(P(nx, ny));
					}
				}
			}
		}
	}
	
	cout << ans << endl;
}