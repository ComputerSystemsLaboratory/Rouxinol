#include <queue>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
char e[1005][1005];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int h, w, n;
int stx, sty;
int countn,k;

struct edge {
	int tx, ty;
	int step;
};

int book[1005][1005]; 
edge a[15];
void bfs( int x, int y ) {
	queue<edge> qq;
	book[x][y] = 1;
	edge ee;
	 ee.tx = x;
	 ee.ty = y;
	 ee.step = 0;
	qq.push( ee );
	while( !qq.empty() ) {
		edge temp = qq.front();
		qq.pop();
		if( temp.tx == a[k].tx && temp.ty == a[k].ty ){
			k++;
			countn += temp.step;
			if(k>n) return;
			while (!qq.empty()) qq.pop();
			
			memset(book,0,sizeof(book));
			bfs( temp.tx, temp.ty );
			return ;
		}
		for( int i = 0; i < 4; i++ ) {
			int ttx = temp.tx + dx[i];
			int tty = temp.ty + dy[i];
			if(ttx<=0 || tty<=0 || ttx>h || tty>w ) continue;
			if(e[ttx][tty] != 'X' && book[ttx][tty]==0) {
				book[ttx][tty] =1;
				edge tt;
				tt.tx = ttx;
				tt.ty = tty;
				tt.step = temp.step+1;
				qq.push(tt);
			}
		}
	}
	return ;
}

int main() {
	
	cin>>h>>w>>n;
	for( int i = 1; i <= h; i++ ) {
		
		getchar();
		for( int j = 1; j <= w; j++ ) {
			scanf("%c", &e[i][j] );
			if( e[i][j] == 'S' ) stx = i, sty = j;
			if(e[i][j]>='1' && e[i][j]<='9')a[e[i][j]-'0'].tx = i,a[e[i][j]-'0'].ty = j;
		}
	}
	countn = 0;
	k=1;
	bfs(stx,sty); 
	
	cout<<countn<<endl; 
	
}
