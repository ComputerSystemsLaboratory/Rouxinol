#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "math.h"
#include <string.h>
#include <stack>
#include <queue>



using namespace std;
#define fori0(G) for(int i=0;i<G;i++)
#define fori1(G) for(int i=1;i<=G;i++)
#define forj0(G) for(int j=0;j<G;j++)
#define forj1(G) for(int j=1;j<=G;j++)
#define fork0(G) for(int k=0;k<G;k++)
#define fork1(G) for(int k=1;k<=G;k++)
int dx[] = { -1,0,1,0 }, dy[] = { 0,1,0,-1 };
#define nxnycon (0<=nx&&nx<h&&0<=ny&&ny<w) 


//#define inf 10000000
typedef struct { int x;int y; } P;
int h, w, n,co=0;
char ch[1000][1000];
int fl[1000][1000];
P ps[10];


int bfs(int t) {
	int nx, ny;
	//fori0(h)forj0(w) { fl[i][j] = inf; }
	memset(fl, -1, sizeof(fl));
	queue<P> que;
	que.push(ps[t]);
	fl[ps[t].x][ps[t].y] = 0;
	while (que.size()) {
		P p = que.front();
		//printf("(%d,%d)", p.x, p.y);
		que.pop();
		fori0(4){
			nx = p.x + dx[i];
			ny = p.y + dy[i];
			if (nxnycon&&ch[nx][ny] != 'X'&&fl[nx][ny] == -1) {
				fl[nx][ny] = fl[p.x][p.y] + 1;
				if (nx == ps[t + 1].x&&ny == ps[t + 1].y) { return fl[nx][ny]; }
				que.push({ nx,ny });

			}
		}

	}

}

int main() {
	cin >> h >> w >> n;
	fori0(h)forj0(w) {
		cin >> ch[i][j];
		if (ch[i][j] == 'S') { ps[0].x = i;ps[0].y = j; }
		if (('0' < ch[i][j]) && (ch[i][j] <= '9')) {
			ps[(int)(ch[i][j] - '0')].x = i; 
			ps[(int)(ch[i][j] - '0')].y = j;
			
		}
	}
	fori0(n) {
		co+=bfs(i);
	}
	
	printf("%d\n",co);
	//system("pause");
	return 0;
}

