#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <functional>
#include <set>
#include <map>
#include <tuple>
#include <bitset>
#include <random>
#define REP(i,n) for(int i=0;i<n;i++)
#define INF 1000000007
using namespace std;
using pii=pair<int,int>;
using LL=int64_t;


vector<int> Dijkstra(vector<vector<pii>> adj_list,int start){/*adj_listはs番目に「「tとsからtへの距離dのpair」を並べたベクトル」が入っているベクトル */
  int n=adj_list.size();
  /*初期化*/
  vector<int> distance(n,INF);
  vector<int> pre(n);/*最短経路におけるひとつ前の頂点*/
  distance.at(start)=0;
  priority_queue<pii,vector<pii>,greater<pii>> unsettled;/*未確定の頂点*/
  REP(u,n){
    unsettled.push(make_pair(distance.at(u),u));
  }

  /*本計算*/
  while(!unsettled.empty()){
    int u;
    tie(ignore,u)=unsettled.top();
    unsettled.pop();/*uを確定*/
    /*uから伸びている辺の先へ書き込み*/

    for(auto vpair : adj_list.at(u)){
      int weight_u_to_v,v;
      tie(v,weight_u_to_v)=vpair;
      int alt=distance.at(u)+weight_u_to_v;
      /*更新*/
      if(distance.at(v)>alt){
        distance.at(v)=alt;
        pre.at(v)=u;
        unsettled.push(make_pair(alt,v));

      }
    }

  }
  return pre;

}



int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pii>> adj_list(n);
    REP(i,m){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adj_list.at(a).push_back(make_pair(b,1));
        adj_list.at(b).push_back(make_pair(a,1));

    }

    vector<int> pre=Dijkstra(adj_list,0);
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++){
        cout<<pre.at(i)+1<<endl;
    }


    return 0;
}