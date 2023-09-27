#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <bitset>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;
const int INF=1<<25;
const int maxn=50;
int  d[maxn][maxn];
int r;
int main()
{
    while(cin>>r)
	{
		if(r==0) break;
		for(int i=0;i<=11;i++)
			for(int j=0;j<=11;j++){
				if(i!=j)
					d[i][j]=INF;
				else
					d[i][j]=0;
			}
		int n;
		n=0;
		for(int i=0;i<r;i++)
		{
			int a,b,num;
			cin>>a>>b>>num;
			int t=max(a,b);
			n=max(t,n);
			d[a][b]=num;
			d[b][a]=num;
		}
		for(int k=0;k<=n;k++)
			for(int i=0;i<=n;i++)
				for(int j=0;j<=n;j++)
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		int minx=INF;
		int k;
		for(int i=0;i<=n;i++){
			int res=0;
			for(int j=0;j<=n;j++)
				res+=d[i][j];
			if(res<minx){
				minx=res;
				k=i;
			}
		}
		cout<<k<<" "<<minx<<endl;


	}
    return 0;
}