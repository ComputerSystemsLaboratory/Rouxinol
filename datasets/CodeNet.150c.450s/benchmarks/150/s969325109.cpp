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

  sort(a.begin(), a.end());

  //output
  for(int i=0; i<n; ++i){
    cout << (i==0?"":" ") << a[i];
  }
  cout << endl;
  return 0;
}