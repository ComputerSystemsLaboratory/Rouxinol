#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int d[100010]; //始点からの距離を保持する配列
const int INF = 1001001001;
template<class T> inline bool chmin(T&a, T b){if(a > b){a = b; return true;}return false;}

int main(){
    int n, m, r; cin >> n >> m >> r;
    vector<vector<P>> G(n);
    fill(d, d + n, INF); //0からn-1までINFにする
    d[r] = 0; //始点は0にして初期化完了
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        G.at(a).push_back({c, b}); //priority_queの時にコストが小さい順位取り出されるように(c, b)というpairを作る
    }
    priority_queue<P, vector<P>, greater<P>> que; 
    que.push({0, r}); //始点を入れる
    while(!que.empty()){
        P v = que.top(); que.pop();
        for(auto nv: G.at(v.second)){ //取り出した点から行ける全ての頂点について
            int dist = nv.first, next = nv.second;
            if(chmin(d[next], d[v.second] + dist)) que.push({d[next], next}); //もし最短距離が更新されたらqueに入れる
        }
    }
    for(int i = 0; i < n; i++){
        if(d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}
