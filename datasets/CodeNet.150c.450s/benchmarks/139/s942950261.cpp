#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;


vector<int> seen;
vector<vector<int>> G;
queue<int> q;

void bfs(int from){
    while (!q.empty()){
        int pos = q.front();
        q.pop();
        for(auto next: G[pos]){
            if(seen[next] != -1){
                continue;
            }
            if(seen[next] == -1){
                seen[next] = pos;
                q.push(next);
            }   
        }
    }
}

int main() {
    int N,M; cin >>N>>M;

    G.assign(N,vector<int>());
    seen.assign(N,-1);
    
    REP(i,M){
        int a,b;
        cin >>a>>b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    q.push(0);
    seen[0] = 0;
    bfs(-1);

    FOR(i,1,N){
        if (seen[i] == -1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    FOR(i,1,N){
        cout << seen[i]+1 << endl;
        
    }


    return 0;
}