#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int a[30][30];
int w, h, cnt;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void search(int x, int y);

bool issearched[30][30];

int main()
{
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		char c;
		int is, js;
		cnt = 1;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> c;
				if(c == '.') a[i][j] = 1;
				else if(c == '#') a[i][j] = -1;
				else if(c == '@'){
					is = i;
					js = j;
				}
			}
		}
		search(is, js);
		cout << cnt << endl;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				a[i][j] = 0;
				issearched[i][j] = false;
			}
		}
	}
	return 0;
}

void search(int x, int y)
{
	int nx, ny;
	for(int i = 0; i < 4; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		issearched[x][y] = true;
		if(nx >= h || ny >=w || nx < 0 || ny < 0) continue;
		if(a[nx][ny] == 1 && !issearched[nx][ny]){
			cnt++;
			search(nx, ny);
		}
	}
}