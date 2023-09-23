#include<cstdio>
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(void)
{
	int i,j,k;
	int n,m,g;
	int dist[114][114];
	int a,b;
	while(1) {
		cin>>n>>m>>g;
		if(!n&&!m) break;
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				dist[i][j]=0;
			}
		}
		for(int i=0;i<g;i++) {
			cin>>a>>b;
			a--,b--;
			dist[b][a]=-1;
		}
		dist[0][0]=1;
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				if(dist[i][j]!=-1&&dist[i][j]!=0) {
					if(dist[i+1][j]!=-1&&i<m) dist[i+1][j]+=dist[i][j];
					if(dist[i][j+1]!=-1&&j<n) dist[i][j+1]+=dist[i][j];
				}
			}
		}
		cout<<dist[m-1][n-1]<<endl;
	}
}