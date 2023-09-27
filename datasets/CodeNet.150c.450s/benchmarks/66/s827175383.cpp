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
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, m;
string u;
vector<string> vs;

int main(){
	bool f = 0;
	cin >> n;
	REP(i, n){
		cin >> u;
		vs.push_back(u);
	}
	cin >> m;
	REP(i, m){
		cin >> u;
		if (find(ALL(vs), u) == vs.end()){
			cout << "Unknown " << u << endl;
		}
		else{
			if (!f)cout << "Opened by " << u << endl;
			else cout << "Closed by " << u << endl;
			f = !f;
		}
	}
}