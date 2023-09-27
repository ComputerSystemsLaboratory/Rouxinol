#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <utility>
#include <algorithm>
#include <sstream>
using namespace std;
typedef pair<int,int> P;

const int max_n=1000+10;
int h,w,n,sx,sy,dx[]={0,0,-1,1},dy[]={-1,1,0,0},d[max_n][max_n],ans;
char c[max_n][max_n];

void bfs(int x,int y,int m){
	if(m>n)return;
	queue<P> q;
	memset(d,0,sizeof(d));
	q.push(P(x,y));
	d[x][y]=1;
	while(!q.empty()){
		P p=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int tx=p.first+dx[i],ty=p.second+dy[i];
			if(c[tx][ty]=='0'+m){
				ans+=d[p.first][p.second];
				bfs(tx,ty,m+1);
				return;
			}
			if(tx>=0 && tx<h && ty>=0 && ty<w && c[tx][ty]!='X' && !d[tx][ty]){
				q.push(P(tx,ty));
				d[tx][ty]=d[p.first][p.second]+1;
			}
		}
	}
}

int main(){
    scanf("%d%d%d",&h,&w,&n);
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++){
            cin>>c[i][j];
            if(c[i][j]=='S'){sx=i;sy=j;}
        }
    bfs(sx,sy,1);
    cout<<ans<<endl;
    return 0;
}