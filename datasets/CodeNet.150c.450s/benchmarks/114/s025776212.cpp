#include <iostream>

const int MAX = 101;
const int NIL = -1; 
const int UPBOUND = (1 << 20);

using namespace std;

int prim(int adj_matrix[][MAX], int n, int u);


int main()
{
	int adj_matrix[MAX][MAX] = {0};		
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int e; cin >> e;
			adj_matrix[i][j] = e == -1? UPBOUND: e;
		}
	}
	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << adj_matrix[i][j] << " ";
//		}
//		cout << endl;
//	}

	
	cout << prim(adj_matrix, n, 1) << endl;
} 


int prim(int adj_matrix[][MAX], int n, int u)
{
	int cost[MAX]; //记录最小权值
	int edge[MAX]; //记录选中的边
	
	
	for (int v = 1; v <= n; v++)
	{
		cost[v] = adj_matrix[u][v];
		edge[v] = u;
	}	 
	
	cost[u] = NIL; //排除u 
	
	while (true)
	{
		int w = NIL;
		int min = 3000; //权值上限 
		for (int v = 1; v <= n; v++)
		{
			if (cost[v] != NIL && cost[v] < min)
			{
				min = cost[v];
				w = v;
			} 
		}
		
		if (w == NIL) break;
		
		cost[w] = NIL;
		
		//更新最小权值数组 
		for (int v = 1; v <= n; v++)
		{
			if (cost[v] > adj_matrix[w][v] && adj_matrix[w][v] != NIL)
			{
				cost[v] = adj_matrix[w][v];
				edge[v] = w;			
			}
		}
				
	}
	
	
	//求生成树的权值
	int sum = 0;
	for (int v = 1; v <= n; v++)
	{
		if (v != u)
		sum += adj_matrix[v][edge[v]];
	} 
	
	return sum;	
	
}

