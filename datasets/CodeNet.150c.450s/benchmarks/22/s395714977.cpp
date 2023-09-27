#include <vector>
#include <iostream>

struct Edge{
    long long from;
    long long to;
    long long cost;
};

using namespace std;
using Edges = vector<Edge>;
const long long INF = 1LL << 60;

/* bellman_ford(Es,s,t,dis)
    入力: 全ての辺Es, 頂点数N, 開始点 begin_idx, 最短経路を記録するdis
    出力: 負の閉路が存在するなら tureとbegin_idxからの最短距離
    計算量：O(|E||V|)
    副作用：dis が書き換えられる
*/

pair<bool, vector<long long>> bellman_ford(long long begin_idx, long long  N, const Edges& Es){
    //それぞれの頂点へ最短経路距離を保存する配列
    //始点0 ,その他はINF
    vector<long long>  dist(N, INF);
    dist[begin_idx] = 0;

    int cnt = 0;
    while(cnt < N){
        bool end = true;
        for(auto e: Es){
            if(dist[e.from] != INF && dist[e.from] + e.cost < dist[e.to] ){
                dist[e.to] = dist[e.from] + e.cost; 
                //一回でも更新したら,終わりではない
                end = false;
            }
        }
        //更新がなかったらループ抜ける
        if(end) break;
        cnt++;
    }
    return {cnt == N, dist};
}


// 問題例
//　http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B&lang=ja

int main(){
    long long V, E, r;
    cin >> V >> E >> r;

    Edges edges(E);
    for(int i=0; i<E; ++i){
        long long s, t, d;
        cin >> s >> t >> d;
        edges[i] = {s, t, d};
    }

    const auto& ans = bellman_ford(r, V, edges);
    if(ans.first == true){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(auto i : ans.second){
            if(i == INF) cout << "INF" << endl;
            else cout << i << endl;
        }
    }
}
