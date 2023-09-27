#include <queue>
#include <iostream>
#include <algorithm>
#define ll long long
#define INF 100000000000000
using namespace std;

ll *par, *rk;

void init(ll n){
  n++;
  par = new ll[n];
  rk = new ll[n];
  for(ll i = 0; i < n; i++){
    par[i] = i;
    rk[i] = 0;
  }
}

ll ufind(ll x){
  if(par[x] == x)
    return x;
  return par[x] = ufind(par[x]);
}

void merge(ll x, ll y){
  x = ufind(x);
  y = ufind(y);
  if(rk[x] < rk[y]){
    par[x] = y;
  }else if(rk[x] > rk[y]){
    par[y] = x;
  }else{
    par[x] = y;
    rk[y]++;
  }
}

bool same(ll x, ll y){
  return ufind(x) == ufind(y);
}

  

int main(){
  ll n, q;
  cin >> n >> q;
  init(n);
  for(ll i = 0; i < q; i++){
    ll com, x, y;
    cin >> com >> x >> y;
    if(com == 0){
      merge(x,y);
    }else{
      if(same(x,y))
	cout << 1 << endl;
      else
	cout << 0 << endl;
    }
  }

}