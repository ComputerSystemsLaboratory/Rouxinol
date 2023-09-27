#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <bitset>
#include <numeric>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <tuple>

using namespace std;

//#define int long long

#define rep(i,n) for(int i = 0; i<n ; i++)
#define FOR(i,a,n) for(int i=a; i<n; i++)
#define REPSTR(i,s) for(int i=0; (s)[i]; i++)
#define REPITR(i,s) for(auto i=(s).begin(); i!=(s).end();i++)

#define RANGE(a,i,b) ((a)<=(i)&&(i)<=(b))

#define pb push_back
#define mp make_pair

#define ALL(a) begin(a), end(a)

#define EXIST(s,x) ((s).find(x)!=(s).end())

#define SET(a,c) memset(a,c,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

#ifdef _DEBUG
#define DEBUG(x) cerr<<#x<<":"<<x<<endl
#else
#define DEBUG(x)
#endif

#define PRINTJOIN(x,n) rep(i,n){if(i)cout<<" ";cout<<x[i];}cout<<endl 
#ifdef int
#define INF 1001001001001001001LL
#else
#define INF 1001001001
#endif

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef stringstream SS;

#define PQ priority_queue

#define FST first
#define SEC second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

VI D;
vector<tuple<int,int,int>> edges;

signed main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int V, E, r; cin>>V>>E>>r;

    D.resize(V);
    fill(ALL(D), INF);
    edges.resize(E);

    rep(i, E){
        int s,t,d; cin>>s>>t>>d;
        edges[i]=make_tuple(s,t,d);
    }

    D[r]=0;

    rep(i, V) {
        bool updated = false;
        rep(j, E) {
            int s,t,d; s=get<0>(edges[j]);t=get<1>(edges[j]);d=get<2>(edges[j]);
            if(D[s] != INF && D[t] > D[s]+d) {
                D[t] = D[s]+d;
                updated = true;
            }
        }
        if(updated && i==V-1) {
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    rep(i,V) {
        if(D[i]==INF) cout<<"INF"<<endl;
        else cout<<D[i]<<endl;
    }

	return 0;
}
