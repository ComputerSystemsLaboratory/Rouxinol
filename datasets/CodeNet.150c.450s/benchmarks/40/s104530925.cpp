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

int a[6];
string s;

int main(){
	REP(i, 6)cin >> a[i];
	Dice d(a);
	cin >> s;
	REP(i, s.size()){
		if (s[i] == 'N'){
			swap(d.me[0], d.me[1]);
			swap(d.me[1], d.me[5]);
			swap(d.me[5], d.me[4]);
		}
		else if (s[i] == 'E'){
			swap(d.me[0], d.me[3]);
			swap(d.me[3], d.me[5]);
			swap(d.me[5], d.me[2]);
		}
		else if (s[i] == 'W'){
			swap(d.me[0], d.me[2]);
			swap(d.me[2], d.me[5]);
			swap(d.me[5], d.me[3]);
		}
		else{
			swap(d.me[0], d.me[4]);
			swap(d.me[4], d.me[5]);
			swap(d.me[5], d.me[1]);
		}
	}
	cout << d.me[0] << endl;
}