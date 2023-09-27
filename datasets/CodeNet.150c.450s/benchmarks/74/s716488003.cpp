#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n, m;
	cin >> n >> m;
	vector<int> v;
	rep(i,m){
		int a;
		cin >> a;
		v.pb(a);
	}
	int dp[n+1];
	fill_n(dp, n+1, INF);

	dp[0] = 0;
	rep(i, n+1){
		rep(j, v.size()){
			if(i-v[j] >= 0)
				dp[i] = min(dp[i-v[j]]+1, dp[i]);
		}
	}
	FIN(dp[n]);

	return 0;
}