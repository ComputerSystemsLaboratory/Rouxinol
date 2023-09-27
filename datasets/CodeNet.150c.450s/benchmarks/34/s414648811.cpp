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
	int dp[31],d;
	fill(dp,dp+31,0);
	dp[0]=1;
	rep(i,30)rep(j,3)if(i-j>=0)dp[i+1]=dp[i+1]+dp[i-j];
	while(1){
		cin>>d;
		if(d==0)break;
		cout<<dp[d]/3650+1<<endl;
	}
}
	