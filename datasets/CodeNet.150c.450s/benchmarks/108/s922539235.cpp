#include <iostream>
#include<queue>
using namespace std;
const int MAXn=100;
const int INFTY=1<<21;

int n,M[MAXn][MAXn]={0},d[MAXn];

void bfs(int u)
{
	queue<int> Q;
	Q.push(u);
	for(int i=0;i<n;i++)d[i]=INFTY;
	d[u]=0;
	int v;
	
	while(!Q.empty())
	{
		v=Q.front();Q.pop();
		for(int r=0;r<n;r++)
		{
			if(M[v][r]==0)continue;
			if(d[r]!=INFTY)continue;
			d[r]=d[v]+1;
			Q.push(r);
		}
	}
	
	for(int i=0;i<n;i++)cout<<i+1<<" "<<(d[i]==INFTY?-1:d[i])<<endl;
	
	return;
}

int main() {
	cin>>n;
	int id,k,v;
	for(int i=0;i<n;i++)
	{
		cin>>id>>k;
		id--;
		for(int j=0;j<k;j++)
		{
			cin>>v;
			M[id][--v]=1;
		}
	}
	bfs(0);
	return 0;
}