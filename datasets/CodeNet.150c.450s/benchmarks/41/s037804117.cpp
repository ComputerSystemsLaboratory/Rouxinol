#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
#include <cstring>
#include <set>
#include <vector>
#include <map>
using namespace std;

typedef long long LL;
	
const LL INF = 0x7ffffffff;
const LL NBDR = -2e7;
const LL BDR = 2e7;
const LL MAXN = 200;
LL G[MAXN][MAXN];

LL n, k, u, v, w;


void init()
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			G[i][j] = i == j ? 0 : INF;
}

void floyd()
{
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < n; i++)
		{
			if(G[i][k] == INF)
				continue; 
			for(int j = 0; j < n; j++)
			{
				if(G[k][j] == INF)
					continue;
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);	
			}
		}
			
	}		
}


int main()
{
	while(scanf("%lld %lld", &n, &k) != EOF)
	{
		init();
		int flag = 0;
		while(k--)
		{
			scanf("%lld %lld %lld", &u, &v, &w);
			G[u][v] = w;
		}
		
		floyd();
		
		for(int i = 0; i < n; i++)
			if(G[i][i] < 0)
			{
				printf("NEGATIVE CYCLE\n");
				flag = 1;
				break;
			}
				
		if(flag == 1)
			continue;		
				 
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(G[i][j] == INF && j < n-1)
					printf("INF ");
				else if(G[i][j] == INF && j < n)
					printf("INF");
				else if(G[i][j] != INF && j < n-1)
					printf("%lld ", G[i][j]);
				else if(G[i][j] != INF && j < n)
					printf("%lld", G[i][j]);
			}
			printf("\n");
		}
	}


	return  0;
}

