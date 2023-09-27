#include<iostream>
#include <cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<queue>

#define REP(i,n) for(int i = 0;i < n ;i++)
#define pa pair<int,int>
#define pq queue< pair<int,int> >
	

using namespace std;

int w,h;
char mp[22][22];
bool dp[22][22];
int dx[]={1,0,-1,0},dy[] = {0,1,0,-1};
int sx,sy;
int cou;

int main()
{
	for(;;)
	{
		cin >> w >>h;
		if(w == 0 && h == 0) break;
		cou = 1;sx = 0;sy = 0;
		REP(i,22)REP(j,22)dp[i][j] = 0;
		
		REP(i,h)REP(j,w)
		{
			cin >> mp[i][j];
			if(mp[i][j] == '@'){sx = i;sy = j;}
		}
		
		pq p;
		p.push(make_pair(sx,sy));
		dp[sx][sy] = 1;
//		cout << sx << ' '<<sy<<endl;
		while(!p.empty())
		{
			pa t = p.front();p.pop();
			REP(i,4)
			{
				int cx = t.first+dx[i],cy = t.second+dy[i];
				if(cx >= 0 && cx < h && cy >= 0 && cy < w)
				if( dp[cx][cy] == 0&& mp[cx][cy] != '#')
				{
//					cout << cx << ' ' <<cy << endl;
					p.push(make_pair(cx,cy));
					dp[cx][cy] = 1;
					cou++;
				}
			}
		}
		
			
		
		cout << cou << endl;
	}
	return 0;
}
		
		
	