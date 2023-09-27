// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector< vector<int> >
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N);
    rep(i, M){
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    vector<int> connect(N, -1);

    for(int c = 0; c < N; c++){
        if(connect[c] != -1) continue;

        queue<int> que;
        connect[c] = c;
        que.push(c);

        while(!que.empty()){
            int v = que.front();
            que.pop();
            for(int i = 0; i < G[v].size(); i++){
                int v2 = G[v][i];
                if(connect[v2] != -1) continue;
                connect[v2] = c;
                que.push(v2);
            }
        }
    }

    int q;
    cin >> q;
    rep(i, q){
        int s, t;
        cin >> s >> t;
        if(connect[s] == connect[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
