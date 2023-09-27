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



int main(){
  ios::sync_with_stdio(false);
  const int ub_a = 10000;
  int n;
  vector<int> a; // 1 .. 10000
  cin >> n;
  for(int i = 0; i<n; ++i){int a_i; cin >> a_i; a.push_back(a_i);}


  //compute
  vector<int> c(ub_a+1, 0);
  vector<int> b(n);

  for(int a_i : a){
    c[a_i] += 1;
  }
  for(auto itr = c.begin()+1; itr!=c.end(); ++itr){
    *itr += *(itr-1);
  }

  for(auto a_i : a){
    b[--(c[a_i])] = a_i;
  }

  //output
  for(int i=0; i<n; ++i){
    cout << (i==0?"":" ") << b[i];
  }
  cout << endl;
  return 0;
}