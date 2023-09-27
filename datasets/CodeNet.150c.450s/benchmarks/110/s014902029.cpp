#include <iostream>
#include <map>
#include <queue>
using namespace std;
typedef pair<int,int> P;
const int INF=1000000;
int H,W,N,d[1000][1000],ans=0;
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
char m[1000][1000];
pair<int,int> f[11];
int bfs(int sx,int sy,int gx,int gy){
	for(int i=0;i<H;i++)
		for(int j=0;j<W;j++)d[j][i]=INF;
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy]=0;
	while(!que.empty()){
		P p=que.front();que.pop();
		if(p==P(gx,gy))break;
		for(int j=0;j<4;j++){
			int nx=p.first+dx[j];
			int ny=p.second+dy[j];
			if(0<=nx&&nx<W&&0<=ny&&ny<H&&m[nx][ny]!='X'&&d[nx][ny]==INF){
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}
	}
	return d[gx][gy];
}
int main()
{
    cin>>H>>W>>N;
	for(int i=0;i<H;i++)
		for(int j=0;j<W;j++){
			cin>>m[j][i];
			int num=m[j][i]-'0';
			if(m[j][i]=='S')f[0]=P(j,i);
			else if(0<num&&num<=N)f[num]=P(j,i);
		}
	for(int i=0;i<N;i++){
		ans+=bfs(f[i].first,f[i].second,f[i+1].first,f[i+1].second);
	}
	cout<<ans<<endl;
    return 0;
}