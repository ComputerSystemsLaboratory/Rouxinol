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
#define INF 1000000007

typedef long long ll; 
typedef pair<ll, ll> PL;


int n, s;
bool d[10];
int ans = 0;
vector< vector<int> > C;

void dfs(int i, int sum, int num){
	if (i == n&&sum == s){
		ans++;
		return;
	}

	for (int j = num; j < 10; j++){
		if (d[j] == 0){
			d[j] = 1;
			dfs(i + 1, sum + j, j);
			d[j] = 0;
		}
	}
	return;
}





int main(){
	while (cin >> n >> s){
		if (n + s == 0)break;
		dfs(0, 0, 0);
		cout << ans << endl;
		ans = 0;
	}
}