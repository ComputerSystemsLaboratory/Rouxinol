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
typedef pair<char, char> PC;

int n, m;
char pc[100000][2], c;
string s;

int main(){
	while (cin >> n&&n){
		REP(i, n){
			cin >> pc[i][0] >> pc[i][1];
		}
		cin >> m;
		REP(i, m){
			cin >> c;
			REP(j, n){
				if (c == pc[j][0]){
					c = pc[j][1];
					break;
				}
			}
			s += c;
		}
		cout << s << endl;
		s.clear();
	}
}