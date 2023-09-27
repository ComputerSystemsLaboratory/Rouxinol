#include <iostream>

using namespace std;

int map[50][50];

int dx[] = {1,1,0,-1,-1,-1,0,1};
int dy[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int x, int y,int w, int h){
	if(x<0 || y<0 || w<=x || h<=y || map[y][x] == 0) return;
	else{
		map[y][x] = 0;
		for(int i=0;i<8;++i){
			dfs(x+dx[i],y+dy[i],w,h);
		}
	}
}

int solve(int w,int h){
	int ans;
	
	int i,j,k;
	ans = 0;
	for(i=0;i<h;++i){
		for(j=0;j<w;++j){
			if(map[i][j]==1){
				map[i][j] = 0;
				for(int k=0;k<8;++k){
					dfs(j+dx[k],i+dy[k],w,h);
				}
				ans++;
			}
		}
	}
	return ans;
}

int main(void){
	int w,h;
	int i,j;
	
	while(cin>>w>>h,w){
		for(i=0;i<h;++i){
			for(j=0;j<w;++j){
				cin >> map[i][j];
			}
		}
		
		cout << solve(w,h) << endl;
	}
	
}