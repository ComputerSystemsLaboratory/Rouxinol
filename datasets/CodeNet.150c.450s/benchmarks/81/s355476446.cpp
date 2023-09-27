#include<bits/stdc++.h>
using namespace std;
const int INF=1e8;
int d[12][12];
int V;
void warshall_floyd()
{
	for(int k=0;k<12;k++)
	for(int i=0;i<12;i++)
	for(int j=0;j<12;j++)
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main()
{
	while(cin>>V)
	{
		if(V==0) break;
		for(int i=0;i<12;i++)
		for(int j=0;j<12;j++)
		{
			if(i==j) d[i][j]=0;
			else d[i][j]=INF;
		}
		for(int i=0;i<V;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			d[a][b]=c; d[b][a]=c;
		}
		warshall_floyd();
		int k,s[12]={0},min=INF;
		for(int i=0;i<12;i++)
		{
			for(int j=0;j<12;j++)
			if(d[i][j]!=INF) s[i]+=d[i][j];
			if(s[i]!=0&&s[i]<min) {min=s[i];k=i;}
		}
		cout<<k<<' '<<min<<endl;
	}
	return 0;
}

