#include<iostream>

using namespace std;

#define WHITE 0
#define BLACK 2
#define GRAY 1
#define MAX 100
#define INFITY 1<<21

int n,M[MAX][MAX];

int prim()
{
	int d[MAX],color[MAX],p[MAX];

	for (int i = 0; i < n; ++i)
	{
		d[i]=INFITY;
		p[i]=-1;
		color[i]=WHITE;
	}

	d[0]=0;
	color[0]=GRAY;
	while(1){
		int u=-1;
		int minv=INFITY;
		// 把距离最小的顶点加入MST
		for (int i = 0; i < n; ++i)
		{
			if (minv>d[i]&&color[i]==GRAY)
			{
				minv=d[i];
				u=i;
			}
		}
		if (u==-1)
		{
			break;
		}
		color[u]=BLACK;

		// 更新距离
		for (int i = 0; i < n; ++i)
		{
			if (color[i]!=BLACK&&d[i]>M[u][i])
			{
				d[i]=M[u][i];
				color[i]=GRAY;
				p[i]=u;
			}
		}
	}
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		if (p[i]!=-1)
		{
			sum+=M[i][p[i]];
		}
	}

	return sum;
}

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int v;
			cin>>v;
			M[i][j]=(v==-1)?INFITY:v;
		}
	}
	cout<<prim()<<endl;
	return 0;
}
