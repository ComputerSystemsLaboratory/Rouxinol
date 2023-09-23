#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
char table[105][105];
int w,h,ans;

void dfs(int x,int y,char kind){
	if (x>h || y>w || x<=0 || y<=0 ) return;
	if (table[x][y] == kind){
		table[x][y] = 0;
		dfs(x-1,y,kind);
		dfs(x+1,y,kind);
		dfs(x,y-1,kind);
		dfs(x,y+1,kind);
	}
}

int main(){
	while(cin>>h>>w){
		if (h==0 && w==0) break;
		memset(table,0,sizeof(table));
		for (int i=1;i<=h;i++)
		for (int j=1;j<=w;j++)	cin>>table[i][j];
		ans=0;
		for (int i=1;i<=h;i++)
			for (int j=1;j<=w;j++){
				if (table[i][j] != 0){
					dfs(i,j,table[i][j]);
					ans++;
				}
			}
		cout<<ans<<endl;
	}
	return 0;
}