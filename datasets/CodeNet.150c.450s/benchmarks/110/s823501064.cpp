#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,int> P;

const int inf=10000;
const int maxh=1010;
const int maxw=1010;
const int maxn=9;

int h,w,n;
int d[maxh][maxw];
char m[maxh][maxw];

int bx,by;
int dx[]={0,0,-1,1}; 
int dy[]={1,-1,0,0};

int bfs(char c){
	for(int i=0;i<h;i++){
		fill(d[i],d[i]+w,inf);
	}
	d[bx][by]=0;
	queue<P> que;
	que.push(P(bx,by));
	while(!que.empty()){
		P p=que.front();
		que.pop();
		if(m[p.first][p.second]==c){
			bx=p.first,by=p.second;
			break;
		}
		for(int i=0;i<4;i++){
			int nx=p.first+dx[i];
			int ny=p.second+dy[i];
			if(0<=nx && nx<h && 0<=ny && ny<w && m[nx][ny]!='X' && d[nx][ny]==inf){
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}
	}
	return d[bx][by];
}

void solve(){
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(m[i][j]=='S'){
				bx=i,by=j;
				break;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=bfs('0'+i);
	}
	cout<<ans<<endl;
}

int main(){
	while(cin>>h>>w>>n){
		for(int i=0;i<h;i++){
			cin>>m[i];
		}
		solve();
	}
	return 0;
}

