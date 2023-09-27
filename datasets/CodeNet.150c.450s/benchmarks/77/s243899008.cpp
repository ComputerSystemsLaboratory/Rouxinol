#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define MEM(a,n) memset(a,n,sizeof(a))
#define p(S) cout<<(S)<<endl
using namespace std;

int main(){
	int N,M;
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	map<char,int> m;
	m['N']=0;
	m['E']=1;
	m['S']=2;
	m['W']=3;
	while(cin>>N,N){
		bool g[21][21];
		MEM(g,false);
		int x,y;
		REP(i,0,N){
			cin>>x>>y;
			g[y][x]=true;
		}
		cin>>M;
		char h;
		int d;
		int nowx=10,nowy=10;
		REP(i,0,M){
			cin>>h>>d;
			REP(j,0,d){
				nowx+=dx[m[h]];
				nowy+=dy[m[h]];
				if(g[nowy][nowx]){
					g[nowy][nowx]=false;
					N--;
				}
			}
		}
		p(N==0?"Yes":"No");
	}
	return 0;
}