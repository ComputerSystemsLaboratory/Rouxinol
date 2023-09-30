/***** ??????????????????????????? *****/

// ???????§???????????????????????§£?????????????????????????????°??§?????????
// ?????? |V| - 1 ??????????????????????????????????????????????????????????????????????????¨????????´??????
// V ????????§?????´??°??????????????? ??? ????????????????????????????????????


#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a; i<n; i++)
#define INF 999999999

// ????????¨???????????????????¨???????????§???????
struct Edge {
    int to, cost;
    Edge(int s, int d) : to(s), cost(d) {}
};

// 1??????????????????????????????????????±????????????????????????????????? vector
// Edges????????????????????????????????????????????°??????????????????
typedef vector<Edge> Edges;

// ???????????±??????????????? vector
// Graph??????????????????????????°?????????????????§??? V ??§?????????
typedef vector<Edges> Graph;


// ???????????°V, ????????°E?????°????????????????????? s ???????????????????????????????????????????????¢????±???????
vector<int> bellman(Graph &G, int s) {
    // ???????????°??¨????????°?????°??????
    int V = G.size();
    vector<int> d(V);
    for(int i=0; i<V; i++) d[i] = INF;
    d[s] = 0;

    while(true) {
        bool update = false;
        for(int i=0; i<V; i++) {
            for(int j=0; j<G[i].size(); j++) {
                Edge e = G[i][j];
                if(d[i] != INF && d[e.to] > d[i] + e.cost) {
                    d[e.to] = d[i] + e.cost;
                    update = true;
                }
            }
        }
        if(!update) break;
    }
    return d;
}

/*
// ??°?????????????????????????????????????????????????????????
bool find_negative_loop() {

}
*/

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    // Graph??????????????????????????°????????????
    Graph G(V);

    int s,t,d;
    rep(i,0,E) {
        cin >> s >> t >> d;
        G[s].push_back(Edge(t, d));
    }

    vector<int> ans = bellman(G, r);
    rep(i,0,ans.size()) (ans[i] != INF) ? cout << ans[i] << endl : cout << "INF" << endl;
    return 0;
}