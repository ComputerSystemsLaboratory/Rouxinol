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
#define INF 100000000000000
using namespace std;
using pii=pair<int,int>;




vector<int64_t> dist;
vector<int> pre;


void Bellman_Ford(vector<vector<pii>> adj_list,int start){
    
    
    int n=adj_list.size();
    /*初期化*/
    dist=vector<int64_t>(n,INF);
    pre=vector<int>(n);/*最短経路におけるひとつ前の頂点*/
    
    dist.at(start)=0;
    REP(i,n-1){
        REP(u,n){
            for(auto vpair : adj_list.at(u)){
                int weight_u_to_v,v;
                tie(v,weight_u_to_v)=vpair;
                if(dist.at(u)!=INF && dist.at(v)>dist.at(u)+weight_u_to_v){
                  dist.at(v)=dist.at(u)+weight_u_to_v;
                  pre.at(v)=u;
                  
                }

            }
        }
    }

    REP(i,n){/*ここで更新があったら負閉路が存在*/
        REP(u,n){
            for(auto vpair : adj_list.at(u)){
                int weight_u_to_v,v;
                tie(v,weight_u_to_v)=vpair;
                if(dist.at(u)!=INF && dist.at(v)>dist.at(u)+weight_u_to_v){
                  dist.at(v)=-INF;
                  
                }

            }
        }
    }

  
}


  

int main() {
  int V,E,r;
  cin>>V>>E>>r;
  vector<vector<pair<int,int>>> adj_list(V);
  
  REP(i,E){
    int s,t,d;
    cin>>s>>t>>d;
    adj_list.at(s).push_back(make_pair(t,d));

  }
  

  Bellman_Ford(adj_list,r);
  
  REP(i,V){
    if(dist.at(i)==-INF){
      cout<<"NEGATIVE CYCLE"<<endl;
      return 0;
    }
  }
  REP(i,V){
    if(dist.at(i)==INF){
      cout<<"INF"<<endl;
    }else{
      cout<<dist.at(i)<<endl;
    }
  }


  return 0;
}
