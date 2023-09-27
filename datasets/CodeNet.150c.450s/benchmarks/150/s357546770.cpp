#include "bits/stdc++.h"
using namespace std;
int32_t main(){
  size_t n; cin>>n;
  vector<uint32_t> a(n), b(n); for(auto&& e:a) cin>>e;
  const size_t k=10'001;
  vector<uint32_t> c(k, 0);
  for(const auto& e:a) ++c[e];
  size_t i=0;
  for(size_t j=0; j<k; ++j){
    for(auto l=i; i<l+c[j]; ++i) a[i]=j;
  }
  const char* dlm="";
  for(const auto& e:a) cout<<exchange(dlm, " ")<<e;
  cout<<'\n';
}
