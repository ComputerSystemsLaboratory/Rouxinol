#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <ctime>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int h, w;
char f[105][105];
int a = 0;

const int dh[] = {-1, 0, 0, 1};
const int dw[] = {0, -1, 1, 0};

void del(int i, int j, char c){
	f[i][j] = '.';
	for(int d = 0; d < 4; d++){
		int ni = i + dh[d];
		int nj = j + dw[d];
		if(ni >= 0 && ni < h && 0 <= nj && nj < w && f[ni][nj] == c){
			del(ni, nj, f[ni][nj]);
		}
	}
	return;
}

int main(){
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0){
			break;
		}
		for(int i = 0; i < h; i++){
			scanf("%s", f[i]);
		}
		int ans = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(f[i][j] != '.'){
					ans++;
					del(i, j, f[i][j]);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}