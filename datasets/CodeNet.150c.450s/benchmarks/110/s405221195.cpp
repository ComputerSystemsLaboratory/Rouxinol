#include<bits/stdc++.h>
using namespace std;
const int dx[]={1,0,-1,0};
const int dy[]={0,1,0,-1};
const int MAXN=1000+20;
int dp[MAXN][MAXN];
int maze[MAXN][MAXN];
int h,w,n,sx[10],sy[10],temp;
void input(){
	memset(maze,-1,sizeof(maze));
	cin>>h>>w>>n;
	cin.get();
	for(int i=1;i<=h;++i){
		for(int j=1;j<=w;++j){
			char x;
			x=cin.get();
			if(x=='.') maze[i][j]=0;
			if(x=='X') maze[i][j]=-1;
			if(x>='0' && x<='9'){
				maze[i][j]=x-'0';
				sx[x-'0']=i;
				sy[x-'0']=j;
			}
			if(x=='S'){
				maze[i][j]=0;
				sx[0]=i;
				sy[0]=j;
			}
		}
		cin.get();
	}
//	for(int i=0;i<10;++i) cout<<sx[i]<<' '<<sy[i]<<endl;
/*	for(int i=1;i<=h;++i){
		for(int j=1;j<=w;++j){
			cout<<setw(4)<<maze[i][j];
		}
		cout<<endl;
	}*/
}
void bfs(int xx,int yy,int nn){
	queue <int> tx;
	queue <int> ty;
	tx.push(xx);
	ty.push(yy);
	while(tx.size() && ty.size()){
		int qx=tx.front(),qy=ty.front();
		tx.pop();
		ty.pop();
		for(int i=0;i<4;++i){
			int x=qx+dx[i],y=qy+dy[i];
			if(maze[x][y]==-1 || dp[x][y]>=0) continue;
			tx.push(x);
			ty.push(y);
			dp[x][y]=dp[qx][qy]+1;
			if(x==sx[nn] && y==sy[nn]){
				temp=dp[qx][qy];
//				cout<<temp<<endl;
				break;
			}
//			cout<<x<<' '<<y<<' '<<dp[x][y]<<endl;
		}
	}
//	cout<<endl;
}
void solve(){
	for(int i=0;i<n;++i){
//		cout<<temp<<endl;
		memset(dp,-1,sizeof(dp));
//		cout<<sx[i+1]<<' '<<sy[i+1]<<endl;
		dp[sx[i]][sy[i]]=temp;
		bfs(sx[i],sy[i],i+1);
	}
	cout<<dp[sx[n]][sy[n]]+n-1<<endl;
}
int main(){
	input();
	solve();
	return 0;
}
