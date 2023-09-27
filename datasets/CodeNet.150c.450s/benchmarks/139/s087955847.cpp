//Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

typedef long long              ll;
typedef long double            ld;
typedef pair<int, int>         pi;
typedef vector<int>            vi;
typedef vector<pair<int, int>> vpi;

#define pb       push_back
#define all(x)   begin(x), end(x)
#define sz(x)    (int)(x).size()
#define ff       first
#define ss       second
#define mp       make_pair
#define lb       lower_bound
#define ub       upper_bound
#define tcase()  int t; cin >> t; while(t--)

const int MOD = 1e9 + 7; // 998244353;
const int MX  = 2e5 + 5;
const ll  INF = 1e18;
const ld  PI  = acos((ld) -1);

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if(sz(name)){
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

vi adj[MX];
int Ans[MX];
bool visited[MX];
queue<int> q;
int dis[MX];

void bfs(int node){

    visited[node] = true;
    dis[node] = 0;
    q.push(node);

    while(!q.empty()){

        int s = q.front(); q.pop();

        for(auto u : adj[s]){

            if(visited[u]) continue;
            visited[u] = true;

            Ans[u] = s;

            dis[u] = dis[s] + 1;
            q.push(u);
        }
    }
}

int main(){

    setIO();

    int n, m;
    cin >> n >> m;

    while(m--){

        int a, b;
        cin >> a >> b;

        adj[a].pb(b), adj[b].pb(a);
    }

    bfs(1);

    for(int i = 1; i <= n; i++){

        if(!visited[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes\n";

    for(int i = 2; i <= n; i++) cout << Ans[i] << "\n";
}
