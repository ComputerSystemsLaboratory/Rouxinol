#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
//#include <chrono> //1e+9で割る auto end= chrono::system_clock::now()-st;  cout<<end.count()%1e+9<<endl;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> LP;
typedef long double db;

#define fr first
#define sc second
#define pb push_back
#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rrep1(i,x) for(int i=x;i>0;i--)
string s1,s2;
int dp[1000][1000];
int main()
{
	cin>>s1>>s2;
	rep(i,s1.size()){
		rep(j,s2.size()){
			dp[i][j]=1000000;
		}
	}
	if(s1[0]==s2[0]) dp[0][0]=0;
	else dp[0][0]=1;
	rep1(i,s1.size()-1){
		dp[i][0]=dp[i-1][0]+1;
		if(s1[i]==s2[0]){
			dp[i][0]=i;
		}
	}
	rep1(j,s2.size()-1){
		dp[0][j]=dp[0][j-1]+1;
		if(s1[0]==s2[j]){
			dp[0][j]=j;
		}
	}
	rep1(i,s1.size()-1){
		rep1(j,s2.size()-1){
			dp[i][j]=min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1]) ) +1;
			if(s1[i]==s2[j]) dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
		}
	}
	cout<<dp[s1.size()-1][s2.size()-1]<<endl;
}
