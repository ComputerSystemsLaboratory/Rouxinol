#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>

using namespace std;
int w, h;
int c[100][100];
int dx[8]={-1, 0, 1, 0, -1, -1, 1, 1};
int dy[8]={0, -1, 0, 1, -1, 1, -1, 1};
int cnt=0;

void search(int x, int y);

int main()
{
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> c[i][j];
			}
		}
		for(int i  = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(c[i][j] == 1){
					c[i][j] = 0;
					search(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
}

void search(int x, int y)
{
	int nx, ny;
	for(int i = 0; i < 8; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
		if(c[nx][ny] == 1){
			c[nx][ny] = 0;
			search(nx, ny);
		}
	}
}