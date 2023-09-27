#include<iostream>
#include <cstring>
#define MAX 105
using namespace std;
int width,height;
int ans = 0;
int dx[] = {-1,0,0,1};
int dy[] = {0,-1,1,0};
char ar[MAX][MAX];
void dfs(int row,int col,char s)
{
	ar[row][col] = '!';
	for(int i = 0;i<4;i++)
	{
		int nx = col+dx[i],ny = row+dy[i];
		if(nx>=0&&nx<width&&ny>=0&&ny<height&&ar[ny][nx]==s)
		{
			dfs(ny,nx,s);
		}
	}
}
int main()
{
	while(cin >> height >> width&&width)
	{
		for(int i = 0;i<height;i++)
			cin >> ar[i];
		for(int i = 0;i<height;i++)
		{
			for(int j = 0;j<width;j++)
				if(strchr("*@#",ar[i][j]))
					{	
						ans++;
						dfs(i,j,ar[i][j]);
					}
		}
		cout << ans <<endl;
		ans = 0;
	}
	return 0;
 } 