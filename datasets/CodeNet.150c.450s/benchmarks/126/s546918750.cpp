#include<iostream>
#include<vector>
#include<queue>
#include<utility>

using namespace std;

bool cant[20][20];
int a,b,ans;

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
		
		queue<pair<int,int> > q;
		q.push(make_pair(0,0));
		
		while(!q.empty())
		{
			pair<int,int> tmp = q.front();q.pop();
			
			if(tmp.first == a-1 && tmp.second == b-1)
			{
				ans++;
				continue;
			}
			
			if(cant[tmp.first][tmp.second] == true)
			{
				continue;
			}
			
			if(tmp.first < a-1)
			{
				q.push(make_pair(tmp.first+1,tmp.second));
			}
			
			if(tmp.second < b-1)
			{
				q.push(make_pair(tmp.first,tmp.second+1));
			}
		}
		
		cout << ans << endl;
	}
		

	
	return 0;
}