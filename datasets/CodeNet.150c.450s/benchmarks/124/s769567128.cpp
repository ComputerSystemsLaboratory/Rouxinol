#include <iostream>
#include <iomanip>


using namespace std;

const int  MAXN = 150;
const int IFNTY = 1 << 20;
const int NIL = -1;


void dijkstra(int adj_matrix[][MAXN], int n, int u, int dis[]);


int main()
{
	int adj_matrix[MAXN][MAXN];
	
	
	
	for (int i = 0; i < MAXN; i++)
	{
		for (int j = 0; j < MAXN; j++)
		{
			adj_matrix[i][j] = IFNTY;			
		}
	}

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		int ID1, degree;
		cin >> ID1 >> degree;
		for (int j = 1; j <= degree; j++)
		{
			int ID2, weight;	
			cin >> ID2 >> weight;
			adj_matrix[ID1][ID2] = weight;		
		}
	}	
	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (adj_matrix[i][j] == IFNTY)
//				cout << setw(3) << "-" << " ";
//			else
//				cout << setw(3) << adj_matrix[i][j] << " ";			
//		}
//		cout << endl;
//	}

	int dis[MAXN];	
	
	dijkstra(adj_matrix, n, 0, dis);
	
	for (int i = 0; i < n; i++)
	{
		cout << i << ' ' << dis[i] << endl;
	}
}



void dijkstra(int adj_matrix[][MAXN], int n, int u, int dis[])
{
	bool visited[MAXN] = {0};
	
	for (int v = 0; v < n; v++)
	{
		dis[v] = adj_matrix[u][v];
	}
	
	dis[u] = 0;
	visited[u] = true;
	
	while (true)
	{
		int w = NIL;
		int min = IFNTY;
		for (int v = 0; v < n; v++)
		{
			if (min > dis[v] && !visited[v])
			{
				w = v;
				min = dis[v];
			}
		}
		
		
		if (w == NIL) break;
		
		visited[w] = true;
		for (int v = 0; v < n; v++)
		{
			if (dis[v] > dis[w] + adj_matrix[w][v])
			{
				dis[v] = dis[w] + adj_matrix[w][v];
			}
		}
	}
}
