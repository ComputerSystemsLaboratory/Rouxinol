#include "bits/stdc++.h"
using namespace std;
template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p){
  os<<p.first<<' '<<p.second;
  return os;
}
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
  const auto last=--cend(v);
  for(auto i=cbegin(v); i<last; ++i) os<<*i<<'\n';
  os<<*last<<'\n';
  return os;
}
template<typename Itr, typename Lt>
auto partition2(const Itr first, const Itr last, const Lt& lt){
  auto i=first;
  for(auto j=first; j!=last; ++j){
    if(!lt(*last, *j)){
      iter_swap(i, j);
      ++i;
    }
  }
  iter_swap(i, last);
  return i;
}
template<typename Itr, typename Lt>
void quick_sort2(const Itr first, const Itr last, const Lt& lt){
  if(first<last){
    auto mid=partition2(first, last, lt);
    quick_sort2(first, mid-1, lt);
    quick_sort2(mid+1, last, lt);
  }
}
int32_t main(){
  size_t n; cin>>n;
  using card=pair<char, uint32_t>;
  vector<card> a(n); for(auto&& e:a) cin>>e.first>>e.second;
  vector<card> b=a;
  const auto lt=[](const card& x, const card& y){ return x.second<y.second; };
  quick_sort2(begin(a), --end(a), lt);
  stable_sort(begin(b), end(b), lt);
  cout<<(a==b?"Stable\n":"Not stable\n")<<a;
}
