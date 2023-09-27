#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <limits>
#include <numeric>

using namespace std;



int main(){
  ios::sync_with_stdio(false);
  
  int n;         // 1 .. 20
  vector<int> p; // size = n, p[i] = 1 .. 2000
  int q;         // 1 .. 200
  vector<int> M; // size = q, M[j] = 1 .. 2000

  //input
  cin >> n;
  for(int i = 0; i<n; ++i){int p_i; cin >> p_i; p.push_back(p_i);}
  cin >> q;
  for(int j = 0; j<q; ++j){int M_j; cin >> M_j; M.push_back(M_j);}
  
  //calc
  for(auto bagsize : M){
    vector<bool> makable(bagsize, false);
    makable[0] = true;
  
    for(auto w : p){
      for(int j = bagsize; j > 0; --j){
	if(j>=w && makable[j-w]){
	  makable[j] = true;
	}
      }
    }
    
    cout << (makable[bagsize] ? "yes" : "no")
	 << endl;
  }
  
  return 0;
}