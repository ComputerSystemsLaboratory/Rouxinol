#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
typedef struct pair<int,int> P;
const int MAXN=1000+2;
int h,w,n,tot,gx,gy,ab=1;
char fac[MAXN][MAXN];
int fo[MAXN][MAXN];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void bfs(){
	memset(fo,0,sizeof(fo));
	queue<P> Q;
	Q.push(P(gx,gy)),fo[gx][gy]=0;
	while(Q.size()){
		P p=Q.front(); Q.pop();
		if(fac[p.first][p.second]-'0'==ab){
			++ab,gx=p.first,gy=p.second,tot+=fo[gx][gy],fac[gx][gy]='.';
			break;
		}
		for(int i=0;i<4;++i){
			int nx=p.first+dx[i],ny=p.second+dy[i];
			if(nx<1 || nx>h || ny<1 || ny>w || fac[nx][ny]=='X' || fo[nx][ny]) continue;
			Q.push(P(nx,ny)),fo[nx][ny]=fo[p.first][p.second]+1;
		}
	}
	if(ab<=n) bfs();
	else return ;
}

int main(){
	cin>>h>>w>>n;
	for(int i=1;i<=h;++i)
		for(int j=1;j<=w;++j){
			cin>>fac[i][j];
			if(fac[i][j]=='S') gx=i,gy=j;
		}
	bfs();
	cout<<tot<<endl;
	return 0;
} 
