#include <bits/stdc++.h>
using namespace std;


const int maxn = 100+10;
char G[maxn][maxn];
int W,H;

int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int x,int y,char tree){
	G[x][y] = '$';
	for(int i=0; i<4; i++){
		int tx = x+dir[i][0], ty = y+dir[i][1];
		if(tx>=0 && tx<W && ty>=0 && ty<H && G[tx][ty]==tree){
			dfs(tx,ty,tree);
		}
	}
}

int main(){
	while(cin>>H>>W && (W||H)){
		int ans = 0;
		
		for(int j=0; j<H; j++){
			for(int i=0; i<W; i++){
				cin >> G[i][j];
			}
		}

		for(int j=0; j<H; j++){
			for(int i=0; i<W; i++){
				if(G[i][j]!='$'){
					dfs(i,j,G[i][j]);
					ans++;
				}
			}
		}

		cout << ans << endl;
	}
}