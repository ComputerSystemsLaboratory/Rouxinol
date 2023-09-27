#include<iostream>

using namespace std;

bool cant[20][20];
int a,b,ans;

void dfs(int x,int y)
{
	if(cant[x][y])return;
	
	if(x == a-1 && y == b-1)
	{
		ans++;
		return;
	}
	
	if(x < a-1)
	{
		dfs(x+1,y);
	}
	if(y < b-1)
	{
		dfs(x,y+1);
	}

}

int main()
{
	
	while(cin >> a >> b,a)
	{
		for(int i = 0;i < 20;i++)for(int j = 0;j < 20;j++)
		{
			cant[i][j] = false;
		}
		
		ans = 0;
		int n;
		cin >> n;
		
		for(int i = 0;i < n;i++)
		{
			int x,y;
			cin >> x >> y;
			cant[x-1][y-1] = true;
		}
		
		dfs(0,0);
		
		cout << ans << endl;
	}
		
	
	
	return 0;
}