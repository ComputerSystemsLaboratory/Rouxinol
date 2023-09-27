#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;cin>>n;
	vector<int> a(n);REP(i,n)cin>>a[i];
	int q;cin>>q;
	int dp[40002];
	fill_n(dp,n,0);
	dp[0] = 1;
	REP(i,n){
		for(int j = 2000*n;j>=a[i];j--){
			dp[j] += dp[j - a[i]];
		}
	}
	REP(i,q){
		int m;cin>>m;
		if(dp[m])cout << "yes" << endl;
		else cout << "no" << endl;
	}
  return 0;
}