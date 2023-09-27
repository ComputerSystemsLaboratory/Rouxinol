//Edit distance

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

string s,t;
int dp[MAX+1][MAX+1];

int d(int i,int j){
	if(s[i]==t[j]) return 0;
	else return 1;
}

int main(){
	cin>>s>>t;
	for(int i=0;i<=s.size();++i) for(int j=0;j<=t.size();++j){
		if(i==0||j==0){
			dp[i][j]=max(i,j);
			continue;
		}
		dp[i][j]=min(min(dp[i-1][j],dp[i][j-1])+1,dp[i-1][j-1]+d(i-1,j-1));
	}
	cout<<dp[s.size()][t.size()]<<endl;
}