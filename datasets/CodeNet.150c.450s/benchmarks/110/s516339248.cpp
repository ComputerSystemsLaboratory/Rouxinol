#include<iostream>
#include<string.h>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,int> P;

int h,w,n;
char m[1000][1000];
int visited[1000][1000];

int main(){
	cin>>h>>w>>n;

	int pos;
	for(int y=0;y<h;y++){
		for(int x=0;x<w;x++){
			cin>>m[x][y];
			if(m[x][y]=='S') pos=x+y*1000;
		}
	}

	memset(visited,0,sizeof(visited));
	int ans=0;
	for(int now=1;now<=n;now++){
		queue<P> q;
		q.push(make_pair(pos,0));
		while(1){
			pos=q.front().first;
			int x=pos%1000;
			int y=pos/1000;
			int cost=q.front().second;
			q.pop();
			if(visited[x][y]==now || m[x][y]=='X') continue;
			if(m[x][y]==('0'+now)){
				ans+=cost;
				break;
			}
			visited[x][y]=now;
			if(0<x) q.push(make_pair(pos-1,cost+1));
			if(x+1<w) q.push(make_pair(pos+1,cost+1));
			if(0<y) q.push(make_pair(pos-1000,cost+1));
			if(y+1<h) q.push(make_pair(pos+1000,cost+1));
		}
	}
	cout<<ans<<endl;
	return 0;
}