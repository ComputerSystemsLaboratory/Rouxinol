//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=jp
//verify用に

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

class Prim {
public:
    typedef pair<ll, int> P;
    int N;
    vector<vector<P>> G;
    vector<bool> used;

    Prim(int N) : N(N) {
        G.resize(N);
        used.resize(N, false);
    }

    void add_edge(int s, int t, ll c){
        G[s].push_back(P(c, t));
        G[t].push_back(P(c, s));
    }

    ll prim() {
        priority_queue<P, vector<P>, greater<P>> que;
        ll res = 0;

        used[0] = true;
        for(int i = 0; i < (int)G[0].size(); i++){
            que.push(G[0][i]);
        }

        while(!que.empty()) {
            P e = que.top();
            que.pop();

            int to = e.second;
            ll cost = e.first;

            if(!used[to]) {
                used[to] = true;
                res += cost;
                for(int i = 0; i < (int)G[to].size(); i++){
                    if(!used[G[to][i].second]) {
                        que.push(G[to][i]);
                    }
                }
            }
        }

        return res;
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    Prim pr = Prim(N);
    for(int i = 0; i < M; i++){
        int a, b;
        ll c;
        cin >> a >> b >> c;
        pr.add_edge(a, b, c);
    }

    cout << pr.prim() << endl;
    return 0;
}
