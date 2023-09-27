#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <limits>
#include <numeric>
#include <iterator>

using namespace std;

//mergesort to count tentou-suu
long merge_sort(const vector<int>::iterator beg, const vector<int>::iterator end){
  if(beg+1 >= end) return 0;

  //divide
  const auto mid = beg+(end-beg)/2;
  long inversion_count =
    merge_sort(beg, mid) +
    merge_sort(mid, end);
  
  //conquer
  vector<int> buff(end - beg);
  auto h1 = beg, h2 = mid;
  for(int& s : buff){
    if(h1 == mid){
      s = *(h2++);
    }
    else if(h2 == end){
      s = *(h1++);
    }
    else{
      inversion_count += (*h1 <= *h2 ? 0 : mid - h1);
      s = (*h1 <= *h2 ? *(h1++) : *(h2++));
    }
  }
  auto itr = beg;
  for(auto s : buff){
    //*(itr++) = s;
    *itr = s;
    ++itr;
  }

  return inversion_count;
}


int main(){
  ios::sync_with_stdio(false);
  
  int n;
  vector<int> a;
  cin >> n;
  for(int i = 0; i<n; ++i){int a_i; cin >> a_i; a.push_back(a_i);}
  
  //calc
  long inversion_count = merge_sort(a.begin(), a.end());
  
  // for(unsigned int i=0; i<a.size(); ++i){
  //   cout << (i==0?"":" ") << a[i];
  // }
  // cout << endl;
  cout << inversion_count << endl;
  return 0;
}