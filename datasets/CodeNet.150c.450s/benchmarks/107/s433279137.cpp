#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

const int INF = INT_MAX / 3;
const int MAX_N = 1001;

int dp[MAX_N + 1][MAX_N + 1];

int levenshtein_distance(string &s1, string &s2) {
	fill_n((int *)dp, sizeof(dp) / sizeof(int), INF);	
	int n = s1.size();
	int m = s2.size();

	for(int i = 0; i <= n; ++i) dp[i][0] = i;	
	for(int j = 0; j <= m; ++j) dp[0][j] = j;	
	
	int cost = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			cost = (s1[i-1] == s2[j-1]) ? 0 : 1;
			dp[i][j] = min(dp[i-1][j] + 1, dp[i][j-1] + 1); // insert or delete 
			dp[i][j] = min(dp[i][j], dp[i-1][j-1] + cost); // replace
		}
	}

	return dp[n][m];
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << levenshtein_distance(s1, s2) << endl;
	return 0;
}