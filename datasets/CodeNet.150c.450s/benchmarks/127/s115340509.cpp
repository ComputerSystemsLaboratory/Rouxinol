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

int m;
string s;
vector<string> vs;

int main(){
	cin >> m;
	REP(i, m){
		vs.clear();
		//ll ans = 0;
		cin >> s;
		FOR(j, 1, s.size()){
			string t[4];
			t[0] = s.substr(0, j);
			t[1] = s.substr(j, s.size() - j);
			t[2] = t[0]; t[3] = t[1];
			reverse(ALL(t[2])); reverse(ALL(t[3]));
			REP(i, 4){
				REP(j, 4){
					if (i % 2 == 0){
						if (j % 2 == 1 && find(ALL(vs), t[i] + t[j]) == vs.end()){
							vs.push_back(t[i] + t[j]);
						}
					}
					else {
						if (j % 2 == 0 && find(ALL(vs), t[i] + t[j]) == vs.end()){
							vs.push_back(t[i] + t[j]);
						}
					}
				}
			}
		}
		cout << vs.size() << endl;
	}
}