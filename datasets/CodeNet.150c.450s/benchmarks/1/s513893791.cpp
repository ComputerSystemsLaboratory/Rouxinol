#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+7;

int main(){
  int n;
  cin>>n;
  
  vector<int> A(n);
  rep(i,n) cin>>A[i];
  
  vector<int> L(n+1);
  rep(i,n+1) L[i]=INF;
  
  rep(i,n) *lower_bound(ALL(L),A[i])=A[i];
  
  cout<<lower_bound(ALL(L),INF)-L.begin()<<endl;

  return 0;
}
