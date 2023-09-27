#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF=(int)1e9;

int main(){
    //入力パート
    int n; cin>>n;
    vector<pair<int,int>> tonari[110]; //隣接リスト 一つ目が行先の頂点で二つ目が辺のコスト
    vector<int> dist(n,INF); //各頂点の（暫定）最短距離を格納
    vector<bool> det(n,false); //各頂点の最短距離が確定しているか格納
    for(int i=0;i<n;++i){
        int u,k,c,v;
        cin>>u>>k;
        for(int j=0;j<k;++j){
            cin>>c>>v;
            tonari[u].push_back(make_pair(c,v));
        }
    }
    //探索パート
    dist[0]=0; //出発地点の最短距離は0
    for(int i=0;i<n;++i){
        int mini=INF,mini_node=-1; //未確定点の最短距離とその頂点番号を格納
        for(int j=0;j<n;++j){ //最短距離が最小の点を探索
            if(det[j]) continue; //確定している点は対象外
            if(dist[j]<mini){
              mini=dist[j];
              mini_node=j;
            }
        }
        det[mini_node]=true; //最短距離を確定させる
        for(pair<int,int> tsugi:tonari[mini_node]){
            dist[tsugi.first]=min(dist[tsugi.first],dist[mini_node]+tsugi.second); //隣接ノードの値の更新
        }
    }
    
    //出力パート
    for(int i=0;i<n;++i){
        cout<<i<<" "<<dist[i]<<endl;
    }
    return 0; 
}

