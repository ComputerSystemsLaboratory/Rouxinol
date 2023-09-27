#include<bits/stdc++.h>
using namespace std;
#define INF 10000000

int prim(int v, vector<vector<pair<int, int> > > adjlist){

    priority_queue<pair<int, int> >  wait;    // first := 候補辺のコスト   second　:= 行先ノード
    vector<int> result(v, INF);               // 頂点iと木の間の最小コスト
    int ans = 0, size = 0;                    // 木のコスト　頂点数

    //初期条件
    result[0] = 0;
    wait.push(make_pair(0, 0));

    while(!wait.empty() && size < v){

        //候補辺のうち最小のものを取り出す
        int newpoint = wait.top().second;
        int newcost = -wait.top().first;
        wait.pop();

        if(result[newpoint] < newcost) continue;

        //出てきた頂点を木に追加
        ans += newcost;
        result[newpoint] = -INF;
        size++;

        // 新しい点から出ている辺をすべてなめる
        for(int i = 0; i < adjlist[newpoint].size(); i++){
            int nextpoint = adjlist[newpoint][i].second;
            int nextcost = adjlist[newpoint][i].first;
            //より木に近くなった頂点があれば,　そこへの枝をqueueに追加
            if(result[nextpoint] > nextcost){
                result[nextpoint] = nextcost;
                wait.push(make_pair(-nextcost, nextpoint));
            }
        }
    }

    return ans;
}


int main(){

    int V; cin >> V;     // V:= 頂点の数
    vector<vector<pair<int, int> > > adjlist(V);      //first := コスト　second := 行先

    //入力
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            int a; cin >> a;
            if(a == -1) continue;
            else{
                adjlist[i].push_back(make_pair(a, j));
            }
        }  
    }

    int ans = prim(V, adjlist);

    cout << ans << endl;
    return 0;
}
