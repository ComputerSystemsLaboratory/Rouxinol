#include<iostream>
#include <vector>
using namespace std;

int main(){
  while (1){
    int m, nmin,nmax;
    cin >> m >> nmin >> nmax;
    if(m==0) break;

    vector<int> pt(m+1);
    for(int i=1; i<=m; i++){
      cin >> pt[i];
    }
    int dmax=0, mx=0;
    for(int i=nmin; i<=nmax; i++){
      if(dmax <= pt[i]-pt[i+1]){
        dmax = pt[i]-pt[i+1];
        mx=i;
      }
    }
    cout << mx << endl;
    
  }
  return 0;
}