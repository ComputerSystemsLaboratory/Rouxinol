#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, r;
  while(cin >> n >> r && n){
    // cout << "n" << n << "r" << r <<endl;
    // ?±±?????????
    vector<int> fuda(n,0);
    for(size_t i=0; i<fuda.size(); i++) fuda[fuda.size()-1-i] = i+1;
    for(int i=0; i<r ; i++){
      int p, c;
      cin >> p >> c;
      // ?????£???????????????
      rotate(fuda.begin(),fuda.begin()+(p-1),fuda.begin()+(p-1)+c);  
      // for(size_t j=0 ; j<fuda.size(); j++) cout << fuda[j] << " ";
      // cout << endl;
    }
    cout << fuda[0] << endl;
  }
}