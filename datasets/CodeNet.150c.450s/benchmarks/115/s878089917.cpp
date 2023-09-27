#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <stack>
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
int dp[1002][1002];
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;
	cin>>n;
	string s1,s2;
	while(n--){
		cin>>s1>>s2;
		FOR(i,1,s1.size()+1){
			FOR(j,1,s2.size()+1){
				if(s1[i-1] == s2[j-1])dp[i][j] = dp[i-1][j-1]+1;
				else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout << dp[s1.size()][s2.size()] << endl;
	}
  return 0;
}