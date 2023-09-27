#include<stdio.h>
#define INF 999999
int route[100][100];
int node[11];
int route_num;

int main()
{
	while(1)
	{
		scanf("%d",&route_num);
		if(route_num==0)
			break;

		int min_cost=INF;
		int min_node=0;
		int node_num=0;
		for(int i=0;i<100;i++)
			for(int j=0;j<100;j++)
				route[i][j]=INF;

		for(int i=0;i<route_num;i++)
		{
			int from,to,cost;
			scanf("%d%d%d",&from,&to,&cost);
			route[from][to] = route[to][from] = cost;
			if(node_num < to)
				node_num=to;
			if(node_num < from)
				node_num=from;
		}

		for(int x=0;x<=node_num;x++)
		{
			for(int i=0;i<=node_num;i++)
				node[i]=INF;
			node[x]=0;

			while(1)
			{
				bool flag=false;
				for(int i=0;i<=node_num;i++)
				{
					for(int j=0;j<=node_num;j++)
					{
						if(node[i]!=INF && route[i][j]!=INF && node[j] > node[i]+route[i][j])
						{
							node[j]=node[i]+route[i][j];
							flag=true;
						}
					}
				}
				if(!flag)
					break;
			}
			int temp=0;
			for(int i=0;i<=node_num;i++)
				temp+=node[i];
			if(min_cost > temp)
			{
				min_cost=temp;
				min_node=x;
			}
		}
		printf("%d %d\n",min_node,min_cost);
	}
}