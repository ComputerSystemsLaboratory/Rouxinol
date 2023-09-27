#include"iostream"
#include"algorithm"
#include"cstdio"
#include"cstring"
#include"string"
#include"vector"
#include"queue"
#include"map"
#include"set"
#include"stack"
#include"cmath"
using namespace std;
#define INF 2147483647
#define maxn 10000
long long int G[maxn][maxn];
long long int dist[maxn][maxn];
int m,n;
void Floyd()
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
				if(G[i][k] != INF && G[k][j] != INF)
                G[i][j] = min(G[i][k]+G[k][j],G[i][j]);
            }
        }
    }
}
void Init()
{
    for(int i=0; i<n; i++)
    {
        G[i][i]=0;
        for(int j=0; j<i; j++)
		{
			G[i][j]=INF;
			G[j][i]=INF;
		}
    }
}
int main()
{
	scanf("%d%d",&n,&m);
        Init();
        for(int i=0; i<m; i++)
        {
            int a, b;
			long long c;
            cin >> a >> b >> c;
            G[a][b] = min(G[a][b],c);
        }
		Floyd();
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(G[i][j]<0&&i==j)
				{
					printf("NEGATIVE CYCLE\n");
					return 0;
				}
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				{
					if(j!=n-1)
					{
						if(G[i][j]==INF)
						cout<<"INF"<<" ";
						else cout<<G[i][j]<<" ";
					}
					else 
					{
						if(G[i][j]==INF)
						cout<<"INF"<<endl;
						else cout<<G[i][j]<<endl;
					}
				}
    return 0;
}
