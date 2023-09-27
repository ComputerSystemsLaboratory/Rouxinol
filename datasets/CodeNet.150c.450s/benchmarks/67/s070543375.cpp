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

int n;
int sum[1010];

int c[1000000];

int main(){
	for (int i = 0; i <= 1000; i++){
		sum[i] = i;
	}
	for (int i = 0; i < 1000; i++){
		sum[i + 1] += sum[i];
	}

	for (int i = 0; i <= 1000; i++){
		for (int j = i+1; j <= 1000; j++){
			int k = sum[j] - sum[i];
			if (k != i&&k != j){
				c[k]++;
			}
		}
	}

	while (cin >> n&&n){
		cout << c[n] << endl;
	}
}