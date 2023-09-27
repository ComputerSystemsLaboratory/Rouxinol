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

int n, r, p, c;
V v;

int main(){
	while (cin >> n >> r&&n + r){
		REP(i, n){
			v.push_back(n - i);
		}
		REP(i, r){
			cin >> p >> c;
			V t;
			REP(i, c){
				t.push_back(v[p - 1 + i]);
			}
			REP(i, p - 1){
				t.push_back(v[i]);
			}
			FOR(i, p - 1 + c, n){
				t.push_back(v[i]);
			}
			v = t;
		}
		cout << v[0] << endl;
		v.clear();
	}
}