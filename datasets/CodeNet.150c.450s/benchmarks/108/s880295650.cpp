#include<iostream>
#include<string.h>
#include<queue>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define MAX 105
using namespace std;
int N;
//int M[MAX][MAX];
vector<int> V[MAX];
int D[MAX];
void BFS(int u)
{
	queue<int> Q;
	Q.push(u);
	D[u]=0;
	while(!Q.empty())
	{
		int i=Q.front();
		Q.pop();
		/*FOR(j,1,N)
			if(M[i][j]&&D[j]==MAX)
			{
				Q.push(j);
				D[j]=D[i]+1;
			}
		*/
		for(int j=0;j<V[i].size();j++)
			if(D[V[i][j]]==MAX)
			{
				Q.push(V[i][j]);
				D[V[i][j]]=D[i]+1;
			}
	}
	FOR(i,1,N)
		printf("%d %d\n",i,(D[i]==MAX)?-1:D[i]);
		//cout<<i<<" "<<((D[i]==MAX)?(-1):D[i])<<"\n";
}
int main()
{
	//memset(M,0,sizeof(M));
	scanf("%d",&N);
	FOR(i,1,N)
		D[i]=MAX;
	int u,k,v;
	FOR(i,1,N)
	{
		scanf("%d %d",&u,&k);
		FOR(j,1,k)
		{
			scanf("%d",&v);
			V[u].push_back(v);
		}
	}
	BFS(1);
	return 0;
}
