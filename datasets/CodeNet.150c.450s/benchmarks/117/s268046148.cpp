#include "bits/stdc++.h"
using namespace std;
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
  const auto last=--cend(v);
  for(auto i=cbegin(v); i<last; ++i) os<<*i<<' ';
  os<<*last<<'\n';
  return os;
}
template<typename Itr>
auto merge(const Itr first, const Itr mid, const Itr last, const Itr result){
  auto ret=0u;
  auto out=result;
  for(auto in1=first,in2=mid; ; ++out,++ret){
    if(in1==mid){
      ret+=last-in2;
      for(; in2!=last; ++in2,++out) *out=*in2;
      break;
    }
    if(in2==last){
      ret+=mid-in1;
      for(; in1!=mid; ++in1,++out) *out=*in1;
      break;
    }
    if(*in1<*in2){
      *out=*in1;
      ++in1;
    } else{
      *out=*in2;
      ++in2;
    }
  }
  copy(result, out, first);
  return ret;
}
template<typename Itr>
size_t merge_sort(Itr first, Itr last, Itr result){
  if(last-first>1){
    auto mid=first+(last-first)/2;
    auto ret=0u;
    ret+=merge_sort(first, mid, result);
    ret+=merge_sort(mid, last, result);
    return ret+merge(first, mid, last, result);
  } else return 0u;
}
int32_t main(){
  size_t n; cin>>n;
  vector<uint32_t> s(n),t(n); for(auto&& e:s) cin>>e;
  const auto c=merge_sort(begin(s), end(s), begin(t));
  cout<<t<<c<<'\n';
}
