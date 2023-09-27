#include <iostream>
#include <queue>
#include <vector>

#define MOD 1000000007
using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

long long modinv(long long a, long long m=MOD) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
    /*MODの割り算の際に
    a/＝b;
    を
    a *= modinv(b,MOD);
    とする。
        */
}

int N,M;
const int MAXN = 100000;
const int MAXM = 200000;


int main(){

    Graph G(MAXN);
    int N,M;cin >> N >> M;
    vector<int> dist(N+1,-1);
    queue<int> que;
    rep(i,M) {
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dist[1] = 0;
    que.push(1);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for(int nv: G[v]) {
            if(dist[nv] != -1)continue;
            
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    int ans[MAXN];

    for(int i=2;i<=N;i++) {
        for(int nv: G[i]){
            if(dist[nv] == dist[i] - 1) {
                ans[i] = nv;
            }
        }
    }

    cout << "Yes" << endl;
    for(int i=2;i<=N;i++) {
        cout << ans[i] << endl;
    }

    
    
}