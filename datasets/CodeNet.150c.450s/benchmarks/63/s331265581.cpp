// SingleSourceShortestPath by Bellman - Ford
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=jp
//
//

#include<iostream>

using namespace std;

#define EDGES 500000
#define VERTICES 100000


int V, E, r, S[EDGES+10], T[EDGES+10], D[EDGES+10];
const int INF = 10000*100000+100;
int C[VERTICES + 1];

void solve();

int main(){
    cin >> V >> E >> r;

    for(int i = 0; i < E; ++i){
        cin >> S[i] >> T[i] >> D[i];
    }

    solve();
}

void solve(){
    for(int i = 0; i < V; ++i){//距離リストの初期化
        C[i] = INF;
    }

    C[r] = 0;

    for(int i = 1; i < V; ++i){
        bool update = false;
        for(int j = 0; j < E; ++j){
            int u = S[j], v = T[j];
            if(C[v] > (C[u] + D[j])) {
                C[v] = C[u] + D[j];
                update = true;
            }
        }
        if (!update) break; //一巡して更新が無くなるまで続ける
    }

    for(int i = 0; i < V; ++i){//距離リストの出力
        if(C[i] == INF) 
            cout << "INF" << endl;
        else
            cout << C[i] << endl;
    }
}
