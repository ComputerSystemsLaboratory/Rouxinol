#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<tuple>
#include<string>
typedef unsigned long long ll;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define F first
#define S second
using namespace std;
const ll INF = 1e12;
const int i_INF = 2147483647;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int dp[1111][1111];
	rep(i, 0, 1111)rep(j, 0, 1111)dp[i][j] = 0;

	rep(i, 0, s1.size() + 1)dp[0][i] = i;
	rep(i, 0, s2.size() + 1)dp[i][0] = i;

	rep(i, 1, s2.size() + 1){
		rep(j, 1, s1.size() + 1) {
			int c;
			if (s1[j - 1] == s2[i - 1])c = 0;
			else c = 1;
			dp[i][j] = min({ dp[i - 1][j] + 1,dp[i][j - 1] + 1 ,dp[i - 1][j - 1] + c });
			//cout << dp[i][j] << " ";
		}//cout << endl;
	}
	cout << dp[s2.size()][s1.size()] << endl;
	return 0;
}
