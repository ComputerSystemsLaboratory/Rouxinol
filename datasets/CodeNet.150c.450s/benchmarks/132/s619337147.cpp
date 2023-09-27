#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define vi  vector<int>
#define vvi vector<vi>
#define pi  pair<int,int>
#define mp  make_pair
#define pb  push_back
#define MOD 1e9 + 7
#define PAI  3.1415
#define all(x) (x).begin(),(x).end()
#define chmax(x,y) x = max(x,y)
#define chmin(x,y) x = min(x,y)
#define pr(x) cout << x << endl
#define Endl endl
#define rep(i,n) for(int i = 0 ; i < n; i++)

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
const int ddx[8] = {-1,0,1,-1,1,-1,0,1};
const int ddy[8] = {-1,-1,-1,0,0,1,1,1};
const int inf = 99999999;
const ll linf = 1LL << 62;

ll gcd(ll a,ll b){
  if(a < b)swap(a , b);
  if(a % b == 0) return b;
  else gcd(b, a%b);
}

ll lcm(ll a,ll b){
  if(a < b)swap(a , b);
  return (a/gcd(a , b))*b;
}

struct UnionFind {
  vi par; //par[i] : iの親番号（例）par[3] = 2 : 3の親は2

  UnionFind(int N) : par(N) { //最初は全てが根として初期化
    rep(i,N) par[i] = i;
  }

  int root(int x){ //データxが属する木の根を再帰で得る : root(x) = {xの木の根}
    if(par[x] == x)return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y){ //xとyの木を併合
    int rx = root(x); //xの根をrx
    int ry = root(y); //yの根をry
    if(rx == ry)return; //xとyの根が同じ
    par[rx] = ry; //xとyの根が同じでない時、xの根rxをyの根にryにつける。
  }

  bool same(int x, int y){//2つのデータx，yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main(){

  int n,p;

  while(cin >> n,n){
    cin >> p;
    int a = p;
    vi v(n,0);
    int pos = 0;

    while(1){
      if(p > 0){
        ++v[pos];
        --p;
      }
      else{
        p += v[pos];
        v[pos] = 0;
      }

      if(v[pos] == a){
        cout << pos << endl;
        break;
      }
      pos = (pos+1) % n;
    }
  }
  return 0;

}
