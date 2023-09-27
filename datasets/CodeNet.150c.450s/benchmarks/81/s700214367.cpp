#include<stdio.h>
#include<string.h>  
#include<math.h>  
  
//#include<map>   
//#include<set>
#include<deque>  
#include<queue>  
#include<stack>  
#include<bitset> 
#include<string>  
#include<iostream>  
#include<algorithm>  
using namespace std;  
  
#define ll long long  
#define INF 0x3f3f3f3f  
#define clean(a,b) memset(a,b,sizeof(a))// 水印 
#define mod 1000000


int shuzu[15][15];
int shuaxin[15];
bool biaoji[15];
int maxx[15];
int n;

void prime(int x)
{
	clean(biaoji,0);
	clean(shuaxin,INF);
	shuaxin[x]=0;
	for(int i=0;i<n;++i)
	{
		int can=-1;
		int min=INF;
		for(int j=0;j<n;++j)
		{
			if(biaoji[j]==0&&shuaxin[j]<min)
			{
				can=j;
				min=shuaxin[j];
			}
		}
		if(can==-1)
			break;
		biaoji[can]=1;
		for(int j=0;j<n;++j)
		{
			if(biaoji[j]==0&&shuzu[can][j]+shuaxin[can]<shuaxin[j])
				shuaxin[j]=shuzu[can][j]+shuaxin[can];
		}
	}
}

int main()
{
	int t;
	while(cin>>t&&t!=0)
	{
		n=0;
		clean(shuzu,INF);
		for(int i=0;i<t;++i)
		{
			int s,e,l;
			cin>>s>>e>>l;
			shuzu[s][e]=l;
			shuzu[e][s]=l;
			n=n>s?n:s;
			n=n>e?n:e;
		}
		n++;
		for(int i=0;i<n;++i)
			shuzu[i][i]=0;
		clean(maxx,0);
		for(int i=0;i<n;++i)
		{
			prime(i);
//			for(int j=0;j<n;++j)
//				cout<<shuaxin[j]<<" ";
//			cout<<endl;
			for(int j=0;j<n;++j)
				maxx[i]=maxx[i]+shuaxin[j];
		}
		int res=0,resl=maxx[0];
		for(int i=0;i<n;++i)
		{
			if(maxx[i]<resl)
			{
				resl=maxx[i];
				res=i;
			}
		}
		cout<<res<<" "<<resl<<endl;
	}
	
}

