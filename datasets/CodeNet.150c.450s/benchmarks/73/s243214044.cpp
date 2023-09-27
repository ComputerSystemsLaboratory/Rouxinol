#include<bits/stdc++.h>
using namespace std;
#define int long long

template <class T>
struct BIT{
  int n;
  vector<T> bit; //[1,N]

  BIT(int _n){
    n = _n;
    bit.resize(n,0);
  }

  T sum(int i){
    T sum = 0;
    while(i > 0){
      sum += bit[i];
      i -= i & -i;
    }
    return sum;
  }

  void add(int i,T x){
    while(i < n){
      bit[i] += x;
      i += i & -i;
    }
  }
};

signed main(){

  int n,q; cin >> n >> q;
  BIT<int> bit(n+1);
  for(int i = 0; i < q; i++){
    int com,x,y; cin >> com >> x >> y;
    if(com == 0){
      bit.add(x,y);
    }
    else {
      cout << bit.sum(y) - bit.sum(x-1) << endl;
    }
  }


  return 0;
}

