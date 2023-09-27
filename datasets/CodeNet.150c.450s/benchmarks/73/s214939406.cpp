#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Bit{
private:
  ll* tree;
  ll size;
  
public:
  Bit(ll n){
    for(int i = 0; i < 6; i++){
      n |= (n >> (1 << i));
    }
    size = n + 1;
    
    tree = new long long[size + 1];
    for(ll i = 0; i < size + 1; i++)
      tree[i] = 0;
  }

  void add(ll x, ll v){
    while(x <= size){
      tree[x] += v;
      x += (x & -x);
    }
  }

  ll sum(ll x){
    ll ret = 0;
    while(x > 0){
      ret += tree[x];
      x -= (x & -x);
    }
    return ret;
  }

};

int main(){
  ll n, q;
  cin >> n >> q;
  Bit bit(n);
  
  for(ll i = 0; i < q; i++){
    int com;
    ll x ,y;
    cin >> com >> x >> y;
    if(com == 1){
      cout << bit.sum(y) - bit.sum(x - 1ll) << endl;
    }else{
      bit.add(x, y);
    }
  }


}