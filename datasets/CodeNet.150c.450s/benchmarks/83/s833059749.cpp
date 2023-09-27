#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
 int a,b;
 cin>>a>>b;
 vector<vector<int>>dp(a+1,vector<int>(b+1));
 for(int c=0;c<a;c++){
 	int d,e;
 	cin>>d>>e;
 	for(int f=0;f<b+1;f++){
 		if(f<e)dp[c+1][f]=dp[c][f];
 		else dp[c+1][f]=max(dp[c][f],dp[c][f-e]+d);
 	}
 }
 cout<<dp[a][b]<<endl;
}