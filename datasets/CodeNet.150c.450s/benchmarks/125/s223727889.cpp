#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = 999999999;

int N;
int tt = 0;
vector< vector<int> > G;
vector<int> H, d, f;
int itrNum[100001];
stack<int> S;

void dfs(int u){
    S.push(u);
    H[u] = 0;

    while(!S.empty()){
        u = S.top();  // ?¨????????????????
        if(d[u] == 0) d[u] = ++tt;
        auto itr_v = next(G[u].begin(), itrNum[u]);
        if(itr_v != G[u].end()){
            itrNum[u]++;
            int v = *itr_v;
            if(H[v] == -1){
                H[v] = 0;
                S.push(v);
            }
        }else{
            S.pop();
            H[u] = 1;
            f[u] = ++tt;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;
    G = vector<vector<int> >(N);
    H = vector<int>(N, -1);
    d = vector<int>(N, 0);
    f = vector<int>(N, 0);
    memset(itrNum, 0, sizeof(itrNum));
    REP(i, N){
        int u,k;
        cin >> u >> k;
        u--;
        REP(j ,k){
            int v;
            cin >> v;
            v--;
            G[u].pb(v);
        }
    }

    REP(i, N) if(H[i] == -1) dfs(i);
    REP(i, N){
        cout << i+1 << " " << d[i] << " " << f[i] << "\n";
    }
    return 0;
}