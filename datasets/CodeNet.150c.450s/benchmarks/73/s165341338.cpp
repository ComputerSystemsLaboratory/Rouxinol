#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define fi first
#define se second

#define INF 2147483647

class RMQ {
private:
  int n;
  vector<int> data;
public:
  RMQ(int n_){
    n=1;
    while(n<n_) n*=2;
    data = vector<int>(2*n-1, 0);
  }
  void update(int k, int a){ // update data[k]=a, k(0-indexed)
    k+=n-1;
    data[k]+=a;
    while(k>0){
      k = (k-1)/2;
      data[k] += a;
    }
  }
  int query(int a,int b,int k=0,int l=0,int r=-1){ //min value in [a,b)
    if(r==-1) r=n;
    // k := current node, range of k := [l,r)
    if(r<=a || b<=l) return 0;
    if(a<=l && r<=b) return data[k];
    int vl=query(a,b,k*2+1,l,(l+r)/2);
    int vr=query(a,b,k*2+2,(l+r)/2,r);
    return vl+vr;
  }
  inline int operator[](int idx){ return data[idx+n-1]; }
}; // END class RMQ

int main(){
  int n,q;
  cin>>n>>q;

  RMQ rmq(n);

  rep(i,q){
    int c,x,y;
    cin>>c>>x>>y;
    if(c==0){
      rmq.update(x-1,y);
    } else {
      cout<<rmq.query(x-1,y)<<endl;
    }
  }

  return 0;
}