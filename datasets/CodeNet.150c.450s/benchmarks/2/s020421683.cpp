#include "bits/stdc++.h"
using namespace std;
template<typename Itr>
auto partition2(const Itr first, const Itr last){
  auto i=first;
  for(auto j=first; j!=last; ++j){
    if(*j<=*last){
      iter_swap(i, j);
      ++i;
    }
  }
  iter_swap(i, last);
  return i;
}
int32_t main(){
  size_t n; cin>>n;
  vector<uint32_t> a(n); for(auto&& e:a) cin>>e;
  const auto last=--end(a);
  auto mid=partition2(begin(a), last);
  for(auto i=begin(a); i!=mid; ++i) cout<<*i<<' ';
  cout<<'['<<*mid<<"] ";
  for(auto i=next(mid); i!=last; ++i) cout<<*i<<' ';
  cout<<*last<<'\n';
}
