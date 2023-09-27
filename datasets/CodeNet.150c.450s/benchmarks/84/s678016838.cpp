#include <bits/stdc++.h>
using namespace std;

#define int long long

template<typename T> 
struct BIT{
  int n;
  vector<T> bit;
  //1-indexed
  BIT():n(-1){}
  BIT(int n_,T d):n(n_),bit(n_+1,d){}
  
  T sum(int i){
    T s=bit[0];
    for(int x=i;x>0;x-=(x&-x))
      s+=bit[x];
    return s;
  }
  void add(int i,T a){
    if(i==0) return;
    for(int x=i;x<=n;x+=(x&-x))
      bit[x]+=a;
  }
  
  int lower_bound(int w){
    if(w<=0) return 0;
    int x=0,r=1;
    while(r<n) r<<=1;
    for(int k=r;k>0;k>>=1){
      if(x+k<=n&&bit[x+k]<w){
	w-=bit[x+k];
	x+=k;
      }
    }
    return x+1;
  }
  
  T sum0(int i){
    return sum(i+1);
  }
  void add0(int i,T a){
    add(i+1,a);
  }

  T query(int l,int r){
    return sum(r-1)-sum(l-1);
  }

  T query0(int l,int r){
    return sum(r)-sum(l);
  }
};

const int INF = 1e9+1;

signed main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for ( int i = 0; i < n; i++ ) cin >> a[i];

  map<int, int> zip;
  vector<int> b = a;
  b.push_back(0);
  b.push_back(INF);
  sort(b.begin(), b.end());
  b.erase(unique(b.begin(), b.end()), b.end());
  for ( int i = 0; i < (int)b.size(); i++ ) {
    zip[b[i]] = i+1;
  }

  BIT<int> bit(b.size(), 0);
  int ans = 0;
  for ( int i = 0; i < n; i++ ) {
    ans += i-bit.sum(zip[a[i]]);
    bit.add(zip[a[i]], 1);    
  }

  cout << ans << endl;
  
  return 0;
}

