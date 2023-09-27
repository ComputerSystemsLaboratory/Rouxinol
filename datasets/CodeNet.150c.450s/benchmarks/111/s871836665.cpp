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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 10000000

typedef long long ll;

int n, a;
vector<int> vi;

ll dp[110][1100];

int main(){
	cin >> n;
	REP(i, n){
		cin >> a;
		if (i == n - 1)continue;
		vi.push_back(a);
	}
	REP(i, vi.size()){
		if (i == 0){
			dp[i][vi[i]] = 1;
			continue;
		}
		REP(j, 21){
			if (j + vi[i] <= 20){
				dp[i][j + vi[i]] += dp[i - 1][j];
			}
			if (j - vi[i] >= 0){
				dp[i][j - vi[i]] += dp[i - 1][j];
			}
		}
	}
	cout << dp[vi.size() - 1][a] << endl;
}