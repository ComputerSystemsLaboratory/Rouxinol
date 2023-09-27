#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>

using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
#define INF 100000000
int table[100][1000];
int x,y,s;
int ans;
int ss(int num,int tax)
{
	int k=num*(100+tax);
	return k/100;
}
int main()
{
	rep2(i,1,100)
	{
		rep2(j,1,1000)
		{
			if(ss(j,i)<1000)table[i][ss(j,i)]=j;
		}
	}
	while(1)
	{
		ans=0;
		cin>>x>>y>>s;
		if(x==0)break;
		rep2(i,1,s)
		{
			ans=max(ans,ss(table[x][i],y)+ss(table[x][s-i],y));
		}
		cout<<ans<<endl;
	}
	return 0;
}