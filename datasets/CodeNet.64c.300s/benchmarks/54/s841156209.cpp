#include<iostream>
#include<sstream>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
#define loop(i,l,r) for(int (i)=(int)(l);(i)<(int)(r);(i)++)
#define rloop(i,l,r) for(int (i)=(int)(l);(i)>(int)(r);(i)--)
#define rep(i,n) loop(i,0,n)
#define rrep(i,n) rloop(i,n-1,-1)
#define INF 0x3f3f3f3f
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

int main(){
	int n,arg[100];
	ll dp[101][21];
	memset(dp,0,sizeof(dp));
	cin>>n;
	rep(i,n)cin>>arg[i];
	dp[1][arg[0]]=1;
	rep(i,n-1){
		rep(j,21){
			if(dp[i][j]>0){
				int p=j+arg[i],m=j-arg[i];
				if(p<=20)dp[i+1][p]+=dp[i][j];
				if(m>=0)dp[i+1][m]+=dp[i][j];
			}
		}
	}
	cout<<dp[n-1][arg[n-1]]<<endl;
}