#include <iostream>
#define MIN(a,b) (((a)>(b))?(b):(a))
#define MIN3(a,b,c) (((a)>(MIN(b,c))?(MIN(b,c)):(a)))
#include <string>
using namespace std;

int main(void){
	int dp[1001][1001];
	string s1,s2;
	int len1,len2;
	cin>>s1>>s2;
	len1=s1.length();
	len2=s2.length();
	for(int i=0;i<=len1;i++)dp[i][0]=i;
	for(int j=0;j<=len2;j++)dp[0][j]=j;
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			dp[i][j]=MIN3(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+((s1[i-1]==s2[j-1])?(0):(1)));
		}
	}
	cout<<dp[len1][len2]<<endl;
	return 0;
}