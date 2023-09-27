#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt" > "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\b.txt"
 


int main() {
	string s, t; cin >> s >> t;
	vector<vector<int>>dp(s.size() + 1, vector<int>(t.size() + 1,10000));
	dp[0][0] = 0;
	for (int i = 0; i <= s.size(); ++i) {
		for (int j = 0; j <= t.size(); ++j) {
			if(i!=s.size())dp[i + 1][j] = min(dp[i][j]+1, dp[i + 1][j]);
			if(j!=t.size())dp[i][j + 1] = min(dp[i][j]+1, dp[i][j + 1]);
			if (i != s.size() && j != t.size())dp[i + 1][j + 1] = min(dp[i][j] + (s[i] != t[j]), dp[i + 1][j + 1]);
		}
	}
	cout << dp[s.size()][t.size()] << endl;
	return 0;
}