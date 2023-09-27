#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

#define MAX_N 1000
#define MAX_M 1000

string s, t;
int dp[MAX_N + 1][MAX_M + 1];

void solve(){
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < t.length(); j++){
			if(s[i] == t[j]){
				dp[i + 1][j + 1];
					dp[i + 1][j + 1] = dp[i][j] + 1;
				} else {
					dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
				}
			}
		}
		cout << dp[s.length()][t.length()] << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s >> t;
		solve();
	}
}