#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1<<17;
const int INF = 1<<29;


class RMQ{
  int n,dat[2*MAX_N-1];
 
public:
  RMQ(int _n = MAX_N){
    n = 1;
    while(n < _n) n *= 2;
    fill(dat, dat+2*n-1, 0);
  }
 
  void add(int k, int a){
    k += n - 1;
    dat[k] += a;
    while(k > 0){
      k = (k - 1) / 2;
      dat[k] = dat[k*2+1] + dat[k*2+2];
    }
  }
 
  int query(int a, int b){ return query(a, b, 0, 0, n);}
  int query(int a, int b, int k, int l, int r){
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) return dat[k];
    else{
      int vl = query(a, b, k*2+1, l, (l+r)/2);
      int vr = query(a, b, k*2+2, (l+r)/2, r);
      return vl + vr;
    }
  }
};


int main(){
  int n,q;
  while(cin >> n >> q){
    RMQ rmq(n+1);
    for(int i=0;i<q;i++){
      int a,x,y;
      cin >> a >> x >> y;
      if(a){
        cout << rmq.query(x, y+1) << endl;
      } else {
        rmq.add(x, y);
      }
    }
  }
}