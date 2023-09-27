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

int n, m;
int pos[50][50];
char d;
int I;

int main(){
	while (cin >> n&&n){
		REP(i, 50)REP(j, 50)pos[i][j] = 0;
		int sy = 10, sx = 10;
		REP(i, n){
			ll x, y;
			cin >> x >> y;
			pos[y][x] = 1;
		}
		int co = 0;
		if (pos[sy][sx] == 1){
			pos[sy][sx] = 0;
			co++;
		}
		cin >> m;
		REP(i, m){
			cin >> d >> I;
			REP(i, I){
				if (d == 'N') sy++;
				else if (d == 'E') sx++;
				else if (d == 'S') sy--;
				else sx--;
				if (pos[sy][sx]){
					pos[sy][sx] = 0;
					co++;
				}
			}
		}
		if (co == n)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}