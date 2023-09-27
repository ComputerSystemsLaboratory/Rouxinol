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
#include <fstream>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MOD 1000000007
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;
typedef pair<ll, string> PLS;

int N;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main(){
	while (cin >> N&&N){
		vector<P> vp;
		vp.push_back(P(0, 0));
		REP(i, N - 1){
			int n, d;
			cin >> n >> d;
			vp.push_back(P(vp[n].first + dx[d], vp[n].second + dy[d]));
		}
		ll minx = INF, miny = INF, maxx = -INF, maxy = -INF;
		REP(i, vp.size()){
			minx = min(minx, vp[i].first);
			miny = min(miny, vp[i].second);
			maxx = max(maxx, vp[i].first);
			maxy = max(maxy, vp[i].second);
		}
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}
}