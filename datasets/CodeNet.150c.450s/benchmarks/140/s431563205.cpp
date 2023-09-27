#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<iomanip>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<ll,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(ll i=0;i<x;i++)
#define repn(i,x) for(ll i=1;i<=x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())

const int MAX = 510000;
const int MOD = 1000000007;

struct edge{
  int u;
  int v;
  int cost;
};

class UnionFind{
public:
    //親の番号を格納する。親だった場合は-(その集合のサイズ)
    vector<int> Parent;

    //作る時はParentの値を全て-1にする
    //こうするとずべてバラバラになる
    UnionFind(int N){
      Parent = vector<int>(N,-1);
    }

    //Aがどのグループに属しているのか調べる
    int root(int A){
      if(Parent[A]<0) return A;
      return Parent[A] = root(Parent[A]);
    }

    //自分のいるグループの頂点数を調べる
    int size(int A){
      return -Parent[root(A)];//親を取ってきたい
    }

    //AとBをくっつける
    bool connect(int A,int B){
      //AとBを直すつつなぐのではなく、root(A)にroot(B)をくっつける)
      A = root(A);
      B = root(B);
      if(A==B){
        //すでにくっついているからくっつけない
        return false;
      }
      //大きい方(A)に小さい方(B)をくっつけたい
      //大小が逆だったらひっくり返しちゃう
      if(size(A)<size(B)) swap(A,B);

      //Aのサイズを更新する
      Parent[A] += Parent[B];
      //Bの親をAに変更する
      Parent[B] = A;

      return true;
    }
  };


bool comp(const edge& e1,const edge& e2){
  return e1.cost < e2.cost;
}

edge es[MAX];
int V,E;                  //頂点数と辺数
// 小さい順に閉路になっていなければ追加するという手法
int kruskal(){
  sort(es, es + E, comp); //edge.costが小さい順にソートする
  UnionFind Uni(V);
  int res = 0;
  for (int i = 0; i < E; i++){
    edge e = es[i];
    if(Uni.root(e.u) != Uni.root(e.v)) {
      Uni.connect(e.u , e.v);
      res += e.cost;
    }
  }
  return res;
}

int main(){
  cin >> V >> E;
  rep(i,E){
    ll a, b, c; cin >> a >> b >> c;
    es[i].u = a; es[i].v = b; es[i].cost = c;
    es[i].u = b; es[i].v = a; es[i].cost = c;
  }

  ll ans = kruskal();
  cout << ans << endl;

}

