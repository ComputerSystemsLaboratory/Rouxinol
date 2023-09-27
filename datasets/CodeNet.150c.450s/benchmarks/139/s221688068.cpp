#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<n;++i)
#define all(v) v.begin(), v.end()
#define PI 3.141592653589793238462643383279
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
typedef long long int ll;
typedef unsigned long long ull;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
typedef pair<ll,ll> P;
const long long MOD = 1e9+7;
const ll INF = 1LL << 60;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
  
int n,m;
vector<vector<int>> G;

void solve(){
    vector<int> dist(n,-1);
    vector<int> prev(n,-1);

    queue<int> que;
    que.push(0);
    dist[0] = 0;

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto nv: G[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                prev[nv] = v;
                que.push(nv);
            }
        }

    }

    cout << "Yes" << endl;
    
    for(int i = 1; i < n; i++){
        cout << prev[i] + 1 << endl;
    }



}

int main(){
    cin >> n >> m;
    G.assign(n,vector<int>());

    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b; a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    solve();


}