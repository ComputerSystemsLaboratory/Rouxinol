#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <functional>
#include <math.h>
#include <utility>
using namespace std;
int a,b,n;
bool road[16][16];
int dp[16][16];
int main()
{
	while(true){
		cin>>a>>b;if(a==0&&b==0)break;
		cin>>n;
		fill(road[0],road[16],false);
		for(int i=0;i<a;i++)dp[i][0]=1;
		for(int j=0;j<b;j++)dp[0][j]=1;
		for(int i=0;i<n;i++){
			int x,y;cin>>x>>y;
			x--;y--;
			road[x][y]=true;
			dp[x][y]=0;
			if(x==0)for(int s=y;s<b;s++)dp[0][s]=0;
			if(y==0)for(int s=x;s<a;s++)dp[s][0]=0;
		}
		for(int i=1;i<a;i++)
			for(int j=1;j<b;j++)
				if(!road[i][j])dp[i][j]=dp[i-1][j]+dp[i][j-1];
		cout<<dp[a-1][b-1]<<endl;
	}
	return 0;
}