#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<map>
#define rep(index,num) for(int index=0;index<num;index++)
#define rep1(index,num) for(int index=1;index<=num;index++)
#define scan(argument) cin>>argument
#define prin(argument) cout<<argument<<endl
#define kaigyo cout<<endl
#define eps 1e-15
typedef long long ll;
using namespace std;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
int INF=1e+9+1;
int N,M[100][100];
int d[100],color[100],p[100];
void dijkstra(){
	int minv;
	rep(i,N){
		d[i]=INF;
		color[i]=0;
	}
	d[0]=0;
	color[0]=1;
	while(1){
		minv=INF;
		int u=-1;
		rep(i,N){
			if(minv>d[i]&&color[i]!=2){
				u=i;
				minv=d[i];
			}
		}
		if(u==-1) break;
		color[u]=2;
		rep(v,N){
			if(color[v]!=2&&M[u][v]!=INF){
				if(d[v]>d[u]+M[u][v]){
					d[v]=d[u]+M[u][v];
					color[v]=1;
				}
			}
		}
	}
}
int main(){
	scan(N);
	rep(i,N){
		rep(j,N){
			M[i][j]=INF;
		}
	}
	int k,c,u,v;
	rep(i,N){
		scan(u);scan(k);
		rep(j,k){
			scan(v);scan(c);
			M[u][v]=c;
		}
	}
	dijkstra();
	rep(i,N){
		printf("%d %d\n",i,(d[i]==INF ? -1 : d[i]));
	}
	return 0;
}

