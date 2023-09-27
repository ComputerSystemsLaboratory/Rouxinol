#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second


bool warshell(int n,vector<mp>* vs,vector<int>* dist,vector<int> *gone){
	rep(i,n){
		gone[i].clear();
		dist[i].clear();
		gone[i].resize(n,-1);
		dist[i].resize(n,-1);
		
		gone[i][i]=1;
		dist[i][i]=0;
		rep(j,vs[i].size()){
			int to=vs[i][j].fir,
				co=vs[i][j].sec;
			gone[i][to]=1;
			dist[i][to]=co;
		}
	}
	
	rep(k,n){
		rep(i,n){
			rep(j,n){
				if(gone[i][k]==-1 || gone[k][j]==-1)continue;
				int cd=dist[i][k]+dist[k][j];
				if(gone[i][j]==-1 || dist[i][j]>cd){
					gone[i][j]=1;
					dist[i][j]=cd;
				}
			}
		}
	}
	rep(i,n)if(dist[i][i]!=0)return false;
	return true;
}


	
	
	
int n,m;

vector<mp> vs[105];


vector<int> dist[105];
vector<int> gone[105];




int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	rep(i,m){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		vs[a].push_back(mp(b,c));
		//vs[b].push_back(mp(a,c));
	}
	if(warshell(n,vs,dist,gone)){
		rep(i,n){
			rep(j,n){
				if(gone[i][j]!=-1)printf("%d",dist[i][j]);
				else printf("INF");
				printf("%s",j==n-1?"\n":" ");
			}
		}
	}
	else printf("NEGATIVE CYCLE\n");
	return 0;
	
}