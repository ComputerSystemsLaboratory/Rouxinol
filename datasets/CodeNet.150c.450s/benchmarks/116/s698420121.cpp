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

int n, k;
ll a[100100];
ll sum[100100];
vector<ll> ans;

int main(){
	while (cin >> n >> k&&n + k){
		fill(a, a + 100100, 0);
		fill(sum, sum + 100100, 0);
		ll MAX = -1000000000;
		REP(i, n)cin >> a[i];
		REP(i, n){
			if (i == 0)sum[i] = a[i];
			else sum[i] = sum[i - 1] + a[i];
		}
		ans.push_back(sum[k-1]);
		REP(i, n - k){
			ans.push_back(sum[i + k] - sum[i]);
		}
		REP(i, ans.size()){
			MAX = max(MAX, ans[i]);
		}
		cout << MAX << endl;
		ans.clear();
	}
}