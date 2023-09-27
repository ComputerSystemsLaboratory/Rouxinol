#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int h, w, n;
char field[1010][1010];
int sx, sy, gx[10], gy[10];
ll ans = 0;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int d[1010][1010];

void solve(int k){
	REP(i, h){
		REP(j, w){
			d[i][j] = INF;
		}
	}

	queue<P> que;

	que.push(P(sy, sx));
	d[sy][sx] = 0;

	while (que.size()){
		P p = que.front(); que.pop();

		int y = p.first, x = p.second;

		if (y == gy[k] && x == gx[k])break;

		REP(i, 4){
			int nx = x + dx[i], ny = y + dy[i];
			if (nx >= 0 && nx < w&&ny >= 0 && ny < h){
				if (field[ny][nx] != 'X'&&d[ny][nx] == INF){
					d[ny][nx] = d[y][x] + 1;
					que.push(P(ny, nx));
				}
			}
		}
	}
}

int main(){
	int pos;
	cin >> h >> w >> n;
	REP(i, h){
		REP(j, w){
			cin >> field[i][j];
			if (field[i][j] == 'S'){
				sy = i, sx = j;
			}
			if (field[i][j] >= '1'&&field[i][j] <= '9') {
				pos = field[i][j] - '0';
				gy[pos] = i, gx[pos] = j;
			}
		}
	}
	for (int k = 1; k <= n;k++){
		solve(k);
		ans += d[gy[k]][gx[k]];
		sy = gy[k], sx = gx[k];
	}
	cout << ans << endl;
}