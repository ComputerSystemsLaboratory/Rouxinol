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
#define EPS 1e-10
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

struct Dice{
	int me[6];
	Dice(int a[6]){
		for (int i = 0; i < 6; i++){
			me[i] = a[i];
		}
	}
};

int a[6], q, yoko[6][4] = { { 1, 2, 4, 3 }, { 5, 2, 0, 3 }, { 1, 5, 4, 0 },
{ 1, 0, 4, 5 }, { 0, 2, 5, 3 }, { 4, 2, 1, 3 } };
string s;

int main(){
	REP(i, 6)cin >> a[i];
	Dice d(a);
	cin >> q;
	REP(k, q){
		int t, f;
		cin >> t >> f;
		REP(i, 6){
			if (d.me[i] == t){
				REP(j, 4){
					if (d.me[yoko[i][j]] == f){
						cout << d.me[yoko[i][(j + 1) % 4]] << endl;
					}
				}
			}
		}
	}
}