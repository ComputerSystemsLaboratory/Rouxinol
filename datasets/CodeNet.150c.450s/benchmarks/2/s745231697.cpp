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


int partition_tail_pivot(vector<int>& a, int p, int r){
  auto piv = a[r];
  int i = p-1;
  for(int j = p; j < r; ++j){
    if(a[j] <= piv){
      ++i;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i+1;
}


int main(){
  ios::sync_with_stdio(false);

  int n;
  vector<int> a; // 1 .. 10000
  cin >> n;
  for(int i = 0; i<n; ++i){int a_i; cin >> a_i; a.push_back(a_i);}
  
  int q = partition_tail_pivot(a, 0, n-1);

  //output
  
  for(int i=0; i<n; ++i){
    cout << (i==0?"":" ") 
	 << (i==q?"[":"")
	 << a[i]
	 << (i==q?"]":"");
  }
  cout << endl;
  //  cout << q << endl;

  return 0;
}