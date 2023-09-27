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

struct Node{
	int x,y;
};

const int max_n=1000+10;
int h,w,n,dx[]={0,0,-1,1},dy[]={-1,1,0,0},d[max_n][max_n],ans;
Node sN;
char c[max_n][max_n];

void bfs(int m){
	if(m>n)return;
	queue<Node> q;
	memset(d,0,sizeof(d));
	q.push(sN);
	d[sN.x][sN.y]=1;
	while(!q.empty()){
		Node p=q.front();
		q.pop();
		
		if(c[p.x][p.y]=='0'+m){
		    ans+=d[p.x][p.y]-1;
		    sN.x=p.x;
		    sN.y=p.y;
		    return;
		}
		for(int i=0;i<4;i++){
			Node nN;
			nN.x=p.x+dx[i];
			nN.y=p.y+dy[i];
			if(nN.x>=0 && nN.x<h 
            && nN.y>=0 && nN.y<w 
		   	&& c[nN.x][nN.y]!='X' && !d[nN.x][nN.y]){
				q.push(nN);
				d[nN.x][nN.y]=d[p.x][p.y]+1;
			}
		}
	}
}

int main(){
    scanf("%d%d%d",&h,&w,&n);
    for(int i=0;i<h;i++)
        scanf("%s",c[i]);
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            if(c[i][j]=='S'){
            	sN.x=i;
            	sN.y=j;
            	break;
            }
    for(int i=1;i<=n;i++)bfs(i);
    cout<<ans<<endl;
    return 0;
}