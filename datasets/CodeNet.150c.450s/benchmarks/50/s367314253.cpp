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

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int n, sum = 0;

int main(){
	while (cin >> n&&n){
		sum = 0;
		n = 1000 - n;
		sum += n / 500;
		n %= 500;
		sum += n / 100;
		n %= 100;
		sum += n / 50;
		n %= 50;
		sum += n / 10;
		n %= 10;
		sum += n / 5;
		n %= 5;
		sum += n;
		cout << sum << endl;
	}
}