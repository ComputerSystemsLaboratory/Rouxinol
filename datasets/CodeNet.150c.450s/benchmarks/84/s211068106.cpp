#include <iostream>
#include <algorithm>
#include <cmath>
#include <complex>
#include <numeric>
#include <array>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <vector>
using namespace std;
template<typename Itr>
auto merge(Itr first1, const Itr last1, Itr first2, const Itr last2, Itr result){
  Itr cpyresult=result;
  size_t ret=0;
  for(Itr cpyfirst1=first1;; ++cpyresult){
    if(cpyfirst1==last1){
      //
      for(; first2!=last2; ++first2,++cpyresult) *cpyresult=*first2;
      break;
    }
    if(first2==last2){
      //
      for(; cpyfirst1!=last1; ++cpyfirst1,++cpyresult) *cpyresult=*cpyfirst1;
      break;
    }
    if(*cpyfirst1<=*first2){
      *cpyresult=*cpyfirst1;
      ++cpyfirst1;
    } else{
      ret+=last1-cpyfirst1; //
      *cpyresult=*first2;
      ++first2;
    }
  }
  for(; result!=cpyresult; ++first1,++result) *first1=*result;
  return ret;
}
template<typename Itr>
size_t mergeSort(Itr first, Itr last, Itr result){
  if(last-first>1){
    Itr mid=first+(last-first)/2;
    size_t ret=0;
    ret+=mergeSort(first, mid, result);
    ret+=mergeSort(mid, last, result);
    return ret+merge(first, mid, mid, last, result);
  } else return 0;
}
int32_t main(){
  size_t n; cin>>n;
  vector<uint32_t> s(n),t(n); for(auto&& e:s) cin>>e;
  const size_t c=mergeSort(begin(s), end(s), begin(t));
  cout<<c<<'\n';
}
