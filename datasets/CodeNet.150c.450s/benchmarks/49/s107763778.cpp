#include <algorithm>
#include <iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int m=1<<28,M=0,s=0;
    for(int i=0;i<n;++i){
      int t;cin>>t;
      m=min(m,t);
      M=max(M,t);
      s+=t;
    }
    cout << (s-m-M)/(n-2) << endl;
  }
  return 0;
}