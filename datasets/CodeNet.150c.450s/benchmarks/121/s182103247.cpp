#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>

using namespace std;

int h,w;
char moji[120][120];
int flag[120][120];
int kotae;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};


void dfs(int x,int y){
	flag[x][y]=1;
	char now = moji[x][y];
	for(int i = 0;i<4;i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(nx<0 || nx>=w || ny<0 || ny >=h)continue;
		if(moji[nx][ny]==now && flag[nx][ny] == 0){
			dfs(nx,ny);
		}
	}
}

int main(){
	while(1){
		cin >> h >> w;
		if (h==0&&w==0) return 0;
		for(int i =0;i<h;i++){
			for(int j = 0;j<w;j++){
				cin >> moji[j][i];
			}
		}
		for(int i =0;i<h;i++){
			for(int j = 0;j<w;j++){
				if(flag[j][i] == 0){
					kotae += 1;
					dfs(j,i);
				}
			}
		}
		cout << kotae << endl;
		kotae = 0;
		for(int i =0;i<h;i++){
			for(int j = 0;j<w;j++){
				flag[j][i] = 0;
			}
		}
	}
}
		