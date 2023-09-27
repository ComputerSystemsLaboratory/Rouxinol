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

struct edge{int from, to, cost;};

edge es[2010];
int d[1010];
int V, E, r;
const int INF=1e9;

bool shortest_path(int s) {
    for(int i=0;i<V;i++) d[i]=INF;
    d[s]=0;
    for(int i=0;i<V;i++){
        bool update=false;
        for (int j=0;j<E;j++){
            edge e=es[j];
            if(d[e.from]!=INF && d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update=true;
            }
        }
        if (!update) break;
        if (i==V-1) return false;
    }
       return true;
}

int main(void){
	int i;

	cin >> V >> E >> r;
	for(i=0;i<E;i++) cin >> es[i].from >> es[i].to >> es[i].cost;

	if(shortest_path(r)){
		for(i=0;i<V;i++){
			if(d[i]==INF) cout << "INF" << endl;
			else cout << d[i] << endl;
		}
	}else{
		cout << "NEGATIVE CYCLE" << endl;
	}
	   return 0;
}