#include <iostream>
#define rep(i,to) for(int i=0;i<to;i++)
using namespace std;

int w,h;
int f[51][51];

int di[] = { 0, 0, 1, 1, 1,-1,-1,-1};
int dj[] = { 1,-1, 0, 1,-1, 0, 1,-1};

void dfs(int i,int j){
	f[i][j] = 0;
	rep(k,8){
		int ni = i + di[k];
		int nj = j + dj[k];
		if(ni>=0 && ni<h && nj>=0 && nj<w && f[ni][nj]==1)
			dfs(ni,nj);
	}
}

int main(void){
	while(cin>>w>>h && (w||h)){
		rep(i,h) rep(j,w) cin>>f[i][j];

		int ans = 0;
		rep(i,h) rep(j,w) if(f[i][j]==1) { dfs(i,j); ans++;}
		cout<<ans<<endl;
	}

	return 0;
}