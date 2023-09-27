#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;

typedef pair<int,int> P;
typedef pair<int,P> P1;

#define fr first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define sor(v) sort(v.begin(),v.end())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))
#define mp1(a,b,c) P1(a,P(b,c))

const int INF=1000000000;
const int dre_4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int dre_8[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

char c[1010][1010];

int bfs(P s,P g){
	queue<P1> que;
	bool used[1010][1010]; rep(i,1010)rep(j,1010)used[i][j]=false;
	
	que.push(P1(0,s));
	while(!que.empty()){
		P1 p=que.front(); que.pop();
		if(p.sc==g)return p.fr;
		if(!used[p.sc.fr][p.sc.sc]){
			rep(i,4){
				int nx=p.sc.fr+dre_4[i][0];
				int ny=p.sc.sc+dre_4[i][1];
				
				if(c[nx][ny]!='X'){
					que.push(mp1(p.fr+1,nx,ny));
				}
			}
			used[p.sc.fr][p.sc.sc]=true;
		}
	}
	
	return INF;
}

int main(){
	int h,w,n;
	cin>>h>>w>>n;
	
	rep(i,1010)rep(j,1010)c[i][j]='X';
	rep1(i,h){
		scanf("\n");
		rep1(j,w){
			cin>>c[i][j];
		}
	}
	
	int x[12],y[12];
	
	rep1(i,h)rep1(j,w){
		if(c[i][j]=='S'){
			x[0]=i;
			y[0]=j;
		}
		rep1(k,n){
			if(c[i][j]=='0'+k){
				x[k]=i;
				y[k]=j;
			}
		}
	}
	
	int ret=0;
	rep1(i,n){
		ret+=bfs(P(x[i-1],y[i-1]),P(x[i],y[i]));
	}
	
	cout<<ret<<endl;
}