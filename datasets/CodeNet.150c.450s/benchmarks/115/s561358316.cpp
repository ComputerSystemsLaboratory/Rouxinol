#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

typedef pair<int,int> pii;

vector<pii> P;

string s,t,rev;

const int MAX_N = 1001;

int dp[MAX_N][MAX_N];

void trace(int i,int j){
	if(dp[i][j] == dp[i-1][j] && dp[i][j] == dp[i][j-1]){
		trace(i-1,j-1);	//??????????§????
	}else if(dp[i][j] == dp[i-1][j]){
		trace(i-1,j);	//???????§????
	}else if(dp[i][j] == dp[i][j-1]){
		trace(i,j-1);	//???????§????
	}else{
		rev += s[i-1];
		if(dp[i-1][j-1] == 0){
			return;
		}
		trace(i-1,j-1);	//??????????§????
	}
}
int main()
{
	string com;
	int n;
	cin >> n;
	for(int l=0;l<n;l++){
	cin >> s;
	cin >> t;
	for(int i=0;i<=s.length();i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=t.length();i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=s.length();i++){
		for(int j=1;j<=t.length();j++){
			if(s[i-1] == t[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}else{
				dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	printf("%d\n",dp[s.length()][t.length()]);
	}
	/*
	trace(s.length(),t.length());
	for(int i=rev.length();i>0;i--){
		com += rev[i-1];
	}
	cout << com << "\n";	//????????±?????¨???????????????????????????
	*/
}