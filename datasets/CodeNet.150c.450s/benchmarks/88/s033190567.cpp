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
#define MAX_N 20000
#define MAX_M 16

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int h, w;

int main(){
	while (cin >> h >> w&&h + w){
		bool f = 0;
		P ans;
		int now = INF;
		for (int i = 1; i < 150; i++){
			for (int j = 1; j < 150; j++){
				if (i >= j)continue;
				if (i*i + j*j == h*h + w*w){
					if (i == h&&j == w)continue;
					if (h < i){
						ans = P(i, j);
						f = 1;
					}
				}
				else if (i*i + j*j > h*h + w*w){
					if (now>i*i + j*j){
						ans = P(i, j);
						now = i*i + j*j;
					}
				}
				if (f)break;
			}
			if (f)break;
		}
		cout << ans.first << " " << ans.second << endl;
	}
}