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
#define MAX_N 5001
typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;
typedef vector<ll> V;

int n, a[MAX_N], sum, MAX;

int main(){
	while (cin >> n&&n){
		MAX = -100000000;
		REP(i, n)cin >> a[i];
		for (int i = 0; i < n; i++){
			sum = a[i];
			MAX = max(MAX, sum);
			for (int j = i + 1; j < n; j++){
				sum += a[j];
				MAX = max(MAX, sum);
			}
		}
		cout << MAX << endl;
	}
}