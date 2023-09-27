#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long ll;
typedef pair<int,int> pii;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

// graph //
int V,E,r,from,to,weight;
ll dist[100][100];

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> V >> E;
    REP(i,V) REP(j,V){
        dist[i][j] = INF;
        if(i==j) dist[i][j] = 0;
    }
    REP(i,E){
        cin >> from >> to >> weight;
        dist[from][to] = weight;
    }
    REP(k,V)
        REP(i,V)
            REP(j,V)
                chmin(dist[i][j],dist[i][k] + dist[k][j]);

    REP(i,V)
        if(dist[i][i] < 0){
            cout << "NEGATIVE CYCLE" << '\n';
            return 0;
        }
    REP(i,V) REP(j,V){
        if(dist[i][j] > 1e10) cout << "INF";
        else cout << dist[i][j];
        cout << (j==V-1 ? '\n' : ' ');
    }
    return 0;
}
