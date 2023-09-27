#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long ll;
typedef pair<int,int> P;

int V;
int cost[110][110];
int mincost[110];
bool vis[110];
const int INF=1e9;

int prim(){
	for(int i=0;i<V;i++){
		mincost[i]=INF;
		vis[i]=false;
	}

	mincost[0]=0;
	int res=0;

    while(true){
        int v=-1;
        for(int u=0;u<V;u++){
            if(!vis[u] && (v==-1 || mincost[u]<mincost[v])) v=u;
        }

        if(v==-1) break;
        vis[v]=true;
        res+=mincost[v];

        for(int u=0;u<V;u++){
            mincost[u]=min(mincost[u],cost[v][u]);
        }
    }
    return res;
}

int main(void){
	          int i,j;

	          cin >> V;
	          for(i=0;i<V;i++){
	        	  for(j=0;j<V;j++){
	        		  int a;
	        		  cin >> a;
	        		  if(a==-1) cost[i][j]=INF;
	        		  else cost[i][j]=a;
	        	  }
	          }

	          cout << prim() << endl;

	          return 0;
}