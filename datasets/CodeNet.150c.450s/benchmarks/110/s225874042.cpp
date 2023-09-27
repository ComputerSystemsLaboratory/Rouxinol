
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<string>
#include<cstdio>
#include<stack>
#include<cmath>
#include<bitset>
#include<memory>
#include<memory.h>
#include<utility>
#include<map>
using namespace std;
#define FOR(i,m,n) for(i=m;i<n;i++)
#define CLR(a,b) memset(a,b,sizeof(a))
#define ROF(i,m,n) for(i=m;i>=n;i--)
#define BUG cout<<"debug"<<endl;
#define RT return
#define BK break
#define HEAP priority_queue
#define SP " "
#define rd(x) (rand()%(x))
#define lowf(a,b,c) lower_bound(a,b,c)
#define upf(a,b,c) upper_bound(a,b,c)
#define sh(a) cout<<a<<endl
typedef long long LL;
typedef vector<int> VI;
const int INF = 2147483647;
const int NEN = -INF - 1;
const LL LINF = 9223372036854775807;
int W, H, I1, J1,N;char g[1005][1005];
bool vis[1005][1005];
bool can(int x, int y)
{
	return x >= 0 && y >= 0 && x < H&&y < W&&g[x][y]!='X';
}
typedef struct node
{
	int i, j, sum;
	node()
	{
		;
	}
	node(int a, int b, int c)
	{
		i = a; j = b; sum = c;
	}
}node;
queue<node>bfs;
typedef struct pos
{
	int x,y;
}pos;
pos all[10];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int main()
{
	cin >> H >> W >> N;
	node temp;
	int T,i,j,ans=0;
	FOR(i, 0, H)
	{
		FOR(j, 0, W)
		{
			cin >> g[i][j];
			//scanf_s("%c", &g[i][j]);
			if (g[i][j] > '0'&&g[i][j] <='9')
			{
				all[g[i][j] - 48].x = i;
				all[g[i][j] - 48].y = j;
			}
			else if (g[i][j] == 'S')I1 = i, J1 = j;
		}
	}
	FOR(T,0,N)
	{
		CLR(vis, 0);
		while (!bfs.empty())bfs.pop();
		if(T>0)bfs.push(node(all[T].x, all[T].y, 0));
		else bfs.push(node(I1, J1, 0));
		while (!bfs.empty())
		{
			temp = bfs.front();
			bfs.pop();
			if (g[temp.i][temp.j] == T+48+1)
			{
				ans += temp.sum;
				break;
			}
			int k = 4,tx,ty;
			while (k--)
			{
				tx = temp.i + dir[k][0];
				ty = temp.j + dir[k][1];
				if (can(tx, ty) == true&&!vis[tx][ty])
				{
					vis[tx][ty] = 1;
					bfs.push(node(tx, ty, temp.sum + 1));
				}
			}
		}
	}
	cout << ans << endl;
}
