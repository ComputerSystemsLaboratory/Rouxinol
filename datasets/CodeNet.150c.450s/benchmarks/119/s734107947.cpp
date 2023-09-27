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
int c[100][100];
int ans;

void solve(int y, int x){
	c[y][x] = 0;

	for (int i = -1; i <= 1; i++){
		for (int j = -1; j <= 1; j++){
			int ny = y + i, nx = x + j;
			if (ny >= 0 && ny < h&&nx >= 0 && nx < w){
				if (c[ny][nx] == 1)solve(ny, nx);
			}
		}
	}
}

int main(){
	while (cin >> w >> h&&w + h){
		REP(i, h){
			REP(j, w){
				cin >> c[i][j];
			}
		}
		ans = 0;
		REP(i, h){
			REP(j, w){
				if (c[i][j] == 1){
					solve(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}