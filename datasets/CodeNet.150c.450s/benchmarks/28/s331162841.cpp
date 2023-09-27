#include <iostream>
#include <vector>
using namespace std;

int judge(int P, int k, vector<int>& v){
  int capa = P, truck = k;
  for(int i=0; i<v.size(); i++){
    while(capa < v[i]){
      capa = P;
      truck--;
      if(truck==0) return -1;
    }
    if(capa >= v[i]){
      capa -= v[i];
    }
  }
  return 1;
}

int main(){
  int n,k; cin >> n >> k;
  vector<int> W;
  for(int i=0; i<n; i++){
    int t; cin >> t;
    W.push_back(t);
  }
  int l=0,r=1000000000;
  int P = (r+l)/2;
  while(r-l>=1){
    if(judge(P,k,W) == -1) l = P+1;
    if(judge(P,k,W) == 1 )  r = P;
    P = (r+l)/2;
  }
  cout << P << "\n";
}