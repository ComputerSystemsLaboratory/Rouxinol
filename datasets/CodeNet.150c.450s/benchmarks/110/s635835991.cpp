#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;
int n,m,k;
char map[1010][1010];
bool vis[1010][1010];

struct p{
	int x;
	int y;
	int step;
};
int ans=0;

bool yesorno(p x){
	if(x.x<1||x.x>m||x.y<1||x.y>n||map[x.y][x.x]=='X'||vis[x.y][x.x]==1)
		return 0;
	return 1;
}

int sx[4]={0,0,1,-1};
int sy[4]={1,-1,0,0};
void bfs(p st,int ww){
	memset(vis,0,sizeof(vis));
	if(ww==k)
		return;
	int temp=0;
	queue<p> q;
	q.push(st);
//	cout<<st.step<<" "<<ww<<" "<<k<<endl;
	while(!q.empty()){
		
		p ne=q.front();
		q.pop();
		if(map[ne.y][ne.x]==(char)'0'+ww+1){
			ans=ne.step;
			bfs(ne,ww+1);
			return;
		}
		for(int i=0;i<4;i++){
			p tem=ne;
			tem.x=tem.x+sx[i];
			tem.y=tem.y+sy[i];
			tem.step++;
			if(yesorno(tem)){
				q.push(tem);
				vis[tem.y][tem.x]=1;
			}
				
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	while(cin>>n>>m>>k){
		memset(vis,0,sizeof(vis));
		p st;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>map[i][j];
				if(map[i][j]=='S'){
					st.x=j;
					st.y=i;
					st.step=0;
				}
			}
		}
		bfs(st,0);
		cout<<ans<<endl;
	}


	return 0;
}


