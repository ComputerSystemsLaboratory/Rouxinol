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
int ata[10];
int H;
int ima;
int input;
int flag;
int zu[5][10];
int ans;
int main()
{
	while(1)
	{
	cin>>H;if(H==0)break;
	rep(i,5)rep(j,10)zu[i][j]=0;
	ans=0;
	rep(i,H)
	{
		rep(j,5)
		{
			cin>>input;
			ans+=input;
			zu[j][H-i-1]=input;
		}
	}
	while(1)
	{
		flag=0;
		rep(i,H)
		{
			int t=zu[2][i];
			if(zu[2][i]!=0&&((zu[2][i]==zu[1][i]&&zu[0][i]==zu[1][i])||(zu[2][i]==zu[1][i]&&zu[2][i]==zu[3][i])||(zu[2][i]==zu[3][i]&&zu[2][i]==zu[4][i])))
			{
				flag=1;
				for(int j=1;j>=0;j--)
				{
					if(zu[j][i]==t)zu[j][i]=0;
					else break;
				}
				for(int j=3;j<5;j++)
				{
					if(zu[j][i]==t)zu[j][i]=0;
					else break;
				}
				zu[2][i]=0;
			}
		}
		rep(i,5)
		{
			rep(j,10)ata[j]=0;
			ima=0;
			rep(j,H)
			{
				if(zu[i][j]!=0)
				{
					ata[ima]=zu[i][j];
					ima++;
				}
			}
			rep(j,H)
			{
				zu[i][j]=ata[j];
			}
		}
		if(flag==0)break;
	}
	rep(i,5)
	{
		rep(j,10)
		{
			ans-=zu[i][j];
		}
	}
	cout<<ans<<endl;
	}
	return 0;
}