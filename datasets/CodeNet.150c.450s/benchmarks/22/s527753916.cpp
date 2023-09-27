/*
O(VE)

build()をした後、1辺を追加するのはO(N^2)で済む

verify:
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C&lang=ja
*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
using pii=pair<int,int>;
template<class T,class U>constexpr bool chmin(T&a,const U b){if(a<=b)return false;a=b;return true;}
template<class T,class U>constexpr bool chmax(T&a,const U b){if(a>=b)return false;a=b;return true;}

//辺 fromあり
template<typename T >
struct Edge {
  int from, to;
  T cost;

  Edge()=default;
  Edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}

};
constexpr int MAX=1<<30;
constexpr ll INF=1LL<<62;


template<typename T>
using Edges=vector<Edge<T>>;


template<typename T>
vector<T> BellmanFord(Edges<T> &g,int v,int s,T inf,T _inf,T zero){
    vector<T> dist(v,inf);
    dist[s]=zero;
    for(int i=0;i<v-1;i++){ //v-1回のループ 不閉路を気にしない場合はここだけ
        for(auto &e:g){
            if(dist[e.from]==inf) continue;
            chmin(dist[e.to],dist[e.from]+e.cost); //Tの足し算、比較
        }
    }
    //不閉路の有無だけを気にする場合はこれを利用
    //不閉路がある場合は空を返す
    for(auto &e:g){
        if(dist[e.from]==inf) continue;
        if(dist[e.from]+e.cost<dist[e.to]) return vector<T>();
    }
    return dist;
    
   /*
    //負の無限大になるところを調べる _infにする
    for(int i=0;i<v-1;i++){
        for(auto &e:g){
            if(dist[e.from]==inf) continue;
            if(dist[e.from]+e.cost<dist[e.to]) dist[e.to]=_inf; //_infを使用
        }
    }
    return dist;
    */
} 

inline pii operator+(const pii &a,const pii &b){
    return {a.first*b.first,a.second+b.second};
}


signed main(){
    int v,e,r;
    cin>>v>>e>>r;
    Edges<ll> g;
    for(int i=0;i<e;i++){
        int s,t,d;
        cin>>s>>t>>d;
        g.emplace_back(s,t,d);
    }
    auto V=BellmanFord<ll>(g,v,r,INF,-INF,0);
    if(V.size()==0) cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(auto ans:V){
            if(ans==INF) cout<<"INF"<<endl;
            else cout<<ans<<endl;
        }
    }
}
