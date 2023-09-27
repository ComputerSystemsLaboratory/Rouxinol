#include <iostream>
#include<vector>
using namespace std;
const int INFTY=1<<28;
const int MAX=1000;

int n,m;//number of vertex,edge
int d[MAX];
vector<pair<int,int>> V[MAX];//to,cost

bool bellman_ford(int s)//false is negative cycle
{
	for(int i=0;i<n;i++)d[i]=INFTY;
	d[s]=0;
	bool update=true;
	pair<int,int>p;
	int c=0;
	
	for(int k=0;update&&k<m;k++)
	{
		update=false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<V[i].size();j++)
			{
				p=V[i][j];
				if(d[i]!=INFTY&&d[p.first]>d[i]+p.second)
				{
					d[p.first]=d[i]+p.second;
					update=true;
					if(k==m-1)return false;
				}
			}
		}
	}
	
	return true;
}

int main() {
	cin>>n;
	int r;cin>>m>>r;
	int a,b,c;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		V[a].push_back(make_pair(b,c));
	}
	bool flag=bellman_ford(r);
	if(flag)
	{
		for(int i=0;i<n;i++)
		{
			if(d[i]!=INFTY)cout<<d[i]<<endl;
			else cout<<"INF"<<endl;
		}
	}
	else cout<<"NEGATIVE CYCLE"<<endl;
	return 0;
}