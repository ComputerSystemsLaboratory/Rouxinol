#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <cstdio> 
#include <functional> 
#include <set> 
#include <sstream> 
#include <cctype>
#include <stack>
#include <queue>
#include <cstring>
#include <map>
 
using namespace std;

bool vis[30][30];
int cnt;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
int w,h;

void dfs(vector<string> &vs,int y,int x){

	if(vis[y][x]) return;
	vis[y][x]=true;
	cnt++;

	for(int i=0;i<4;i++){
		int ny=y+dy[i],nx=x+dx[i];
		if( 0<=ny && ny<h && 0<=nx && nx<w && vs[ny][nx]=='.') dfs(vs,ny,nx);
	}

}

int main(){

	while(cin>>w>>h,w||h){

		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++) vis[i][j]=false;
		}
		cnt=0;

		vector<string> vs(h);
		int x,y;
		for(int i=0;i<h;i++){
			cin>>vs[i];
			for(int j=0;j<w;j++){
				if(vs[i][j]=='@') y=i,x=j;
			}
		}

		dfs(vs,y,x);
		cout<<cnt<<endl;

	}

	return 0;
}