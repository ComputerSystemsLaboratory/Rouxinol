#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main(){
	string s1,s2;	cin>>s1>>s2;
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++)	dp[i][j]=INT_MAX;
	}
	dp[0][0]=0;
	for(int i=1;i<=(int)s1.size();i++)	dp[i][0]=i;
	for(int i=1;i<=(int)s2.size();i++)	dp[0][i]=i;
	for(int i=1;i<=(int)s1.size();i++){
		for(int j=1;j<=(int)s2.size();j++){
			dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;//挿入(=削除)
			int cost=(s1[i-1]==s2[j-1])?0:1;
			dp[i][j]=min(dp[i][j],dp[i-1][j-1]+cost);//置き換え
		}
	}
	cout<<dp[s1.size()][s2.size()]<<endl;
	return 0;
}