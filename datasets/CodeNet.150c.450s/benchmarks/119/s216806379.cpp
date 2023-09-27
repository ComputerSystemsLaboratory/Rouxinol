#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;

bool f[50][50];
bool cell[50][50];
int w,h;

int dfs(int i,int j)
{
	if(i < 0 || j < 0 || i >= h || j >= w || f[i][j])return 0;

	if(!cell[i][j])return 0;

	f[i][j] = true;

	dfs(i-1,j);
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i,j-1);
	
	dfs(i-1,j-1);
	dfs(i-1,j+1);
	dfs(i+1,j-1);
	dfs(i+1,j+1);

	return 1;
}

int cast()
{
	int sum = 0;
	for(int i = 0;i < h;i++)
	{
		for(int j = 0;j < w;j++)
		{
			sum += dfs(i,j);
		}
	}
	return sum;
}



int main()
{

	while(1)
	{
		cin >> w >> h;

		if(!w && !h)break;

		memset(f,0,50*50*sizeof(bool));
		memset(cell,0,50*50*sizeof(bool));

		for(int i = 0;i < h;i++)
		{
			for(int j = 0;j < w;j++)
			{
				cin >> cell[i][j];
			}
		}

		cout << cast() << endl;
	
	}

  return 0;
}