#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

int N,M;
int edge [10] [10];
const int INF = 1e9;

int main()
{
	while(scanf("%d",&M),M){
		fill(edge [0],edge [10],INF);
		N = 0;
		FOR(i,0,M){
			int u,v,w;
			scanf("%d%d%d",&u,&v,&w);
			chmin(edge [u] [v],w);
			chmin(edge [v] [u],w);
			chmax(N,max(u,v) + 1);
		}
		FOR(i,0,N) edge [i] [i] = 0;

		FOR(k,0,N) FOR(i,0,N) FOR(j,0,N){
			chmin(edge [i] [j],edge [i] [k] + edge [k] [j]);
			chmin(edge [j] [i],edge [i] [k] + edge [k] [j]);
		}

		int mn = INF,ans = -1;
		FOR(i,0,N){
			int sum = 0;
			FOR(j,0,N) if(edge [i] [j] < INF){
				sum += edge [i] [j];
			}
			if(sum < mn){
				mn = sum;
				ans = i;
			}
		}

		printf("%d %d\n",ans,mn);
	}

	return 0;
}