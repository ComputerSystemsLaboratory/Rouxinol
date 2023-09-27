
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#define unsigned long long 
#define rep(i,a,b) for(ull (i)=(a);(i)<(b);i++)
void dfs(int w, int h);
using namespace std;
int field[50][50];
int x, y;
int cnt;
int main(void){
	while (true){
		cin >> x >> y;
		if (x == 0)
			break;
		cnt = 0;
		for (int i = 0; i < y; i++){
			for (int j = 0; j < x; j++){
				cin >> field[i][j];
			}
		}
		for (int i = 0; i < y; i++){
			for (int j = 0; j < x; j++){
				if (field[i][j] == 1){
					cnt++;
					dfs(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}


void dfs(int h, int w){
	field[h][w] = 0;

	if (w < x - 1){
		if (field[h][w + 1] == 1){
			dfs(h, w + 1);
		}
	}
	if (w < x - 1&&h<y-1){
		if (field[h+1][w + 1] == 1){
			dfs(h+1 ,w + 1);
		}
	}
	if (h<y - 1){
		if (field[h+ 1][w ] == 1){
			dfs(h +1 ,w );
		}
	}
	if (h<y - 1&&w>0){
		if (field[h + 1][w-1] == 1){
			dfs(h + 1, w-1);
		}
	}
	if (w>0){
		if (field[h ][w - 1] == 1){
			dfs(h , w - 1);
		}
	}
	if (w>0&&h>0){
		if (field[h-1][w - 1] == 1){
			dfs(h-1, w - 1);
		}
	}
	if (h>0){
		if (field[h - 1][w] == 1){
			dfs(h - 1, w);
		}
	}
	if (h>0&&w<x-1){
		if (field[h - 1][w+1] == 1){
			dfs(h - 1, w+1);
		}
	}
}