#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
typedef pair<int,int> pii;
int table[1100][1100];
int map[1100][1100];
int main()
{
	int height,width,n;
	cin>>height>>width>>n;
	int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
	int ans=0;
	pii f;
	memset(map,-1,sizeof(map));
	for(int y=1;y<=height;y++)
	{
		for(int x=1;x<=width;x++)
		{
			char m;cin>>m;
			int temp;
			if(m=='S')
			{
				f.first=x;
				f.second=y;
				temp=0;
			}
			else if(m=='X')
			{
				temp=-1;
			}
			else if(m=='.')
			{
				temp=0;
			}
			else 
			{
				temp=m-'0';
			}
			map[y][x]=temp;
		}
	}
	
	
	
	
	for(int u=1;u<=n;u++)
	{
		queue< pii > que;
		memset(table,-1,sizeof(table));
		que.push(f);
		table[f.second][f.first]=0;
		while(!que.empty())
		{
			pii now=que.front();que.pop();
			if(map[now.second][now.first]==u)
			{
				ans+=table[now.second][now.first];
				f=now;
				break;
			}
			for(int i=0;i<4;i++)
			{
				int x,y;
				x=now.first+dx[i];
				y=now.second+dy[i];
				
				if(map[y][x]!=-1&&table[y][x]==-1)
				{
					table[y][x]=table[now.second][now.first]+1;
					pii next;
					next.first = x;
					next.second = y;
					que.push(next);
				}
			}
			/*
			for(int y=1;y<=height;y++)
			{
				for(int x=1;x<=width;x++)
				{
					cout<<table[y][x];
				}
				cout<<endl;
			}
			*/
		}
	}
	
	cout<<ans<<endl;
}