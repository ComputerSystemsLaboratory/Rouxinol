#include<bits/stdc++.h>
using namespace std;
template <class A, class B> inline bool chmax(A &a, const B &b) { return b > a && (a = b, true); }
template <class A, class B> inline bool chmin(A &a, const B &b) { return b < a && (a = b, true); }
typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pint;
typedef vector<long long> vlong;
#define _GLIBCXX_DEBUG
#define vpush(a,x) a.push_back(x);
#define rep(i, n) REP(i, 0, n)
#define all(v) v.begin(), v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)
struct Unionfind{
    vector<int> rank,p,si;//木の高さの管理=rank,p=親の管理
    Unionfind(){}
        //初期化
    Unionfind(int size){
                rank.resize(size,0);
                p.resize(size,0);
              si.resize(size,1);
                for(int i=0;i<size;i++){
                        makeSet(i);
        }
    }
    void makeSet(int x){
                p[x]=x;//親を自分にする。
                rank[x]=0;//最初の高さは0
              si[x]=1;
    }
        //同じ集合か判定。
    bool same(int x,int y){
                return (findSet(x)==findSet(y));
    }
        //集合を併合
    void unite(int x,int y){
                link(findSet(x),findSet(y));
    }
    void link(int x,int y){
      if(x!=y){
              if(rank[x]<rank[y]){
                  p[x]=y;
                  si[y]+=si[x];
        }
              else{
                  p[y]=x;
                  if(rank[x]==rank[y]){
                     rank[y]++; 
            }
                  si[x]+=si[y];
        }
               
      }//cout<<rank[x]<<' '<<rank[y]<<'\n';
    }
          int siz(int x){
              int a=findSet(x); 
              return si[a];
    }             
        //経路圧縮
    int findSet(int x){
        //自分自身と親が等しくなるまで再帰
                if(x!=p[x]){
                        p[x]=findSet(p[x]);
                }
                return p[x];
    }
};
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    Unionfind uf(n);
    int a,b;
    rep(i,m){
        cin>>a>>b;
        uf.unite(a,b);
    }
    int p;
    cin>>p;
    rep(i,p){
        cin>>a>>b;
        if(uf.same(a,b)){
            cout<<"yes"<<'\n';
        }
        else{
            cout<<"no"<<'\n';
        }
    }
    return(0);
}
