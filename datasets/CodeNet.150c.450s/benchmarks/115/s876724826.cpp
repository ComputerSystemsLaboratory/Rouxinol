#include <bits/stdc++.h>
using namespace std;
#define MAX 1001
int dp[MAX][MAX];
int lcs(string& s,string& t,int si,int ti){
	int ret = 0;
	if(si < 0 || ti < 0)return 0;
	if(dp[si][ti] != -1)return dp[si][ti];
	if( s[si] == t[ti] ){
		ret = max(ret, lcs(s,t,si-1,ti-1) + 1);
	}else{
		if(si > 0)ret = max(ret, lcs(s,t,si-1,ti));
		if(ti > 0)ret = max(ret, lcs(s,t,si,ti-1));
	}
	return dp[si][ti] = ret;
}

int main(void){
	int T;
	cin >> T;
	for(int k=0;k<T;k++){
		string s,t;
		cin >> s >> t;
		// memset(dp,0,sizeof(dp));
		for(int i=0;i<MAX;i++)for(int j=0;j<MAX;j++)
			dp[i][j] = -1;
		cout << lcs(s,t,s.size()-1,t.size()-1) << endl;;
	}
	return 0;
}