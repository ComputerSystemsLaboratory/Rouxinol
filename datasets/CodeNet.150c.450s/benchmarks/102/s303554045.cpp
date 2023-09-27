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

int w, h;
char field[21][21];
bool used[21][21];

int sx, sy;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void solve(int y,int x){

	REP(i, 4){
		int ny = y + dy[i], nx = x + dx[i];
		if (ny < h&&ny >= 0 && nx < w&&nx >= 0){
			if (field[ny][nx] == '.'&&used[ny][nx] == 0){
				used[ny][nx] = 1;
				solve(ny, nx);
			}
		}
	}

	return;
}

int main(){
	while (cin >> w >> h&&w + h){
		REP(i, 21)REP(j, 21)used[i][j] = 0;
		REP(i, h){
			REP(j, w){
				cin >> field[i][j];
				if (field[i][j] == '@'){
					sy = i, sx = j;
				}
			}
		}

		solve(sy, sx);
		used[sy][sx] = 1;

		int ans = 0;
		REP(i, h){
			REP(j, w){
				if (used[i][j])ans++;
			}
		}
		cout << ans << endl;
	}
}