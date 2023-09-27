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

int n, p;
int w[100];

int main(){
	while (cin >> n >> p&&n + p){
		fill(w, w + 100, 0);
		int co = 0;
		int wan = 0;
		while (1){
			if (wan == p){
				wan -= w[co];
				w[co] = 0;
				co++;
				if (co == n)co = 0;
				continue;
			}
			w[co]++;
			if (w[co] == p)break;
			co++;
			wan++;
			if (co == n)co = 0;
		}
		cout << co << endl;
	}
}