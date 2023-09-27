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

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int ans;
int H , W;
char m[100][100];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void solve(int y, int x){
	char co = m[y][x];
	m[y][x] = '.';

	for (int i = 0; i < 4; i++){
		int ny = y + dy[i], nx = x + dx[i];
		if (m[ny][nx] == co&&ny >= 0 && ny < H&&nx >= 0 && nx < W){
			solve(ny, nx);
		}
	}
}

int main(){
	while (cin >> H >> W&&H + W){
		ans = 0;
		REP(i, H)REP(j, W)cin >> m[i][j];
		REP(i, H){
			REP(j, W){
				if (m[i][j] != '.'){
					solve(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}