#include<cstdio>
#include<queue> 
#include<cstdlib> 
#include<cstring>
#include<climits>
#include<cstring>
#include<iostream>
#define MAX_M 2000
#define MAX_N 2000
using namespace std;

string field[200];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int INF = 0x3f3f3f3f;
int N, M, cnt;

void dfs(int x, int y, char c)
{
	field[x][y] = '.';
	for(int i = 0; i <= 3; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if(0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == c){
			dfs(nx, ny, field[nx][ny]);
		}
	}
	return;
}



int main()
{
	ios::sync_with_stdio(false);
	while(cin >> N >> M && N && M){
		cnt = 0;
		for(int i = 0; i < N; i++)
			cin >> field[i];
		
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{	
				if(field[i][j] != '.')
				{
					dfs(i, j, field[i][j]);
					cnt++;
				}
			}
		}
		cout << cnt << endl;	
	}		
	return 0;
} 