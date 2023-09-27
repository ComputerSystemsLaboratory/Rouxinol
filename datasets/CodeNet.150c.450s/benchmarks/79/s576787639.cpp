#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> cut(vector<int> crd,int p,int c){
  vector<int> ret = crd;
  for(int i=0;i<c;++i) ret[i] = crd[i+p];
  for(int i=0;i<p;++i) ret[c+i] = crd[i];
  return ret;
}

int main(){
  int n,k;
  while(cin>>n>>k,n||k){
    vector<int> crd;
    for(int i=n;i>=1;--i) crd.push_back(i);
    while(k--){
      int p,c;
      cin >> p >> c;--p;
      crd = cut(crd,p,c);
    }
    cout << crd[0] << endl;
  }
  return 0;
}