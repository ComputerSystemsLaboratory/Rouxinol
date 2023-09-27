#include<iostream>
#include<cstring>

const int INF=1000000000;

int d[10][10];

int dyjkstra(int start,int n);

int main()
{	
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				d[i][j]=INF;
			}
		}

		int n,a,b,c,townnum=0;
		bool appear[10];
		memset(appear,0,sizeof(appear));
		
		std::cin>>n;
		if(n==0)break;
		
		for(int i=0;i<n;i++)
		{
			std::cin>>a>>b>>c;
			
			d[a][b]=c;
			d[b][a]=c;
			
			if(!appear[a]){appear[a]=true;townnum++;}
			if(!appear[b]){appear[b]=true;townnum++;}
		}

		int mintown,mincost=INF;
		
		for(int i=0;i<townnum;i++)
		{
			int temp;
			temp=dyjkstra(i,townnum);
			if(temp<mincost)
			{
				mintown=i;
				mincost=temp;
			}
		}
		std::cout<<mintown<<' '<<mincost<<std::endl;
	}
	return 0;
}

int dyjkstra(int start,int n)
{
	int allcost=0;//Sum of cost[i]
	int cost[10];
	bool visited[10];

	memset(visited,0,sizeof(visited));
	for(int i=0;i<n;i++)
	{
		cost[i]=INF;
	}
	
	cost[start]=0;
	while(1)
	{
		int u=-1;
		for(int i=0;i<n;i++)
		{
			if(!visited[i]&&(u==-1||cost[u]>cost[i]))//未決定で距離最小の町u
			{
				u=i;
			}
		}
		
		if(u==-1)break;
		
		visited[u]=true;
		allcost+=cost[u];
		
		
		for(int i=0;i<n;i++)//uから行ける町のcost更新	
		{
			cost[i] = cost[i]>cost[u]+d[u][i] ? cost[u]+d[u][i] : cost[i];
		}
	}
	return allcost;
}