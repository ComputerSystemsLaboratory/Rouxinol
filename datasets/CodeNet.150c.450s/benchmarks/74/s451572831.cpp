#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int dp[25][51000];
int c[25];
const int INF=99999999;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>c[i];
	for(int i=0;i<=m;i++)for(int j=1;j<=n;j++)dp[i][j]=INF;

	for(int i=1;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(j<c[i])dp[i][j]=dp[i-1][j];
			else dp[i][j]=min(dp[i-1][j],dp[i][j-c[i]]+1);
		}
	}
	cout<<dp[m][n]<<endl;
	//for(int i=0;i<=m;i++){for(int j=0;j<=n;j++){cout<<dp[i][j]<<" ";}cout<<endl;}
	return 0;
}