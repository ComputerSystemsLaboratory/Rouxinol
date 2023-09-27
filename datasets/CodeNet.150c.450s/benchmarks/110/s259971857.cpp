/*
*
*/
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#define CLR(ARR,NUM) memset(ARR,NUM,sizeof(ARR))
#define GETNUM(NUM) scanf("%d",&NUM)
#define faster_io() ios_base::sync_with_stdio(false)
using namespace std;
const int MAXN = 1010;
char map[MAXN][MAXN];
bool vis[10][MAXN][MAXN];
struct node{
	int x;
	int y;
	int deep;
	int n;
};
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int main()
{
	CLR(vis,false);
	CLR(map,'X');
	int h,w,n;
	cin >> h >> w >> n;
	getchar();
	int sx,sy;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			map[i][j]=getchar();
			if(map[i][j]=='S'){
				sx=i;
				sy=j;
			}
		}
		getchar();
	}
	node t;
	t.x=sx;
	t.y=sy;
	t.deep=0;
	t.n=0;
	queue<node>q;
	vis[0][sx][sy]=true;
	q.push(t);
	int ans = -1;
	while(!q.empty()){
		node cur=q.front();
		if(cur.n==n){
			ans=cur.deep;
			break;
		}
		q.pop();
		for(int i=0;i<4;i++){
			int tx=cur.x+dx[i];
			int ty=cur.y+dy[i];
			if(map[tx][ty]!='X'&&!vis[cur.n][tx][ty]){
				node t = cur;
				t.x=tx;
				t.y=ty;
				t.deep++;
				if(map[tx][ty]=='1'+t.n){
					t.n++;
				}
				vis[t.n][tx][ty]=true;
				q.push(t);
			}
		}
	}
	cout << ans << endl;
	return 0;
}