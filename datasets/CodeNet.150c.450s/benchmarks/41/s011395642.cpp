#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<string>> vvs;
typedef vector<vector<char>> vvc;
typedef vector<vector<bool>> vvb;
typedef pair<int,int> P;
typedef pair<ll, ll> Pll;
#define vrep(v,n) for(int i=0;i<n;i++){cin >> v.at(i);} 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, n) for (int i = 0; i <= (int)(n); i++)
#define srep(i, l, n) for (int i = l; i < (int)(n); i++)
#define srepn(i, l, n) for (int i = l; i <= (int)(n); i++)
#define pb push_back 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

const int mod = 1000000007;
const int inf = 1e9;
#define PI 3.14159265369;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int ddx[8] = {1,1,1,-1,-1,-1,0,0};
int ddy[8] = {0,1,-1,0,1,-1,1,-1};


int main(){
    const ll INF = 1e18;
    int V, E;
    cin >> V >> E;
    ll dis[V][V];
    rep(i,V)rep(j,V){
        if(i==j) dis[i][j] = 0;
        else dis[i][j] = INF;
    }
    rep(i,E){
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = c;
    }
    rep(k,V)rep(i,V)rep(j,V){
        dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j]);
    }
    rep(i,V)rep(j,V){
        if(dis[i][j]+dis[j][i] < 0){
            cout <<"NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    rep(i,V)rep(j,V){
        if(dis[i][j] >= 1e17) cout << "INF";
        else cout << dis[i][j];
        if(j==V-1) cout << endl;
        else cout << " ";
    }
}
