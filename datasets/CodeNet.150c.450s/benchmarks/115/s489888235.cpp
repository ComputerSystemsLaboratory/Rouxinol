#include <bits/stdc++.h>
using namespace std;

int LCS(string x,string y){
	int xs,ys;
	xs=x.size();ys=y.size();
	int dp[xs+1][ys+1];
	for(int i=0;i<xs+1;i++)
		for(int j=0;j<ys+1;++j)
			dp[i][j]=0;
	for(int i=0;i<xs+1;i++){
		for(int j=0;j<ys+1;++j){
			if(i==0||j==0)dp[i][j]=0;
			else{
				if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
				else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[xs][ys];
}


int main(){
	int n;
	cin >> n;
	string s1,s2;
	for(int i=0;i<n;i++){
		cin >> s1 >> s2;
		cout << LCS(s1,s2) << endl;
	}
}
