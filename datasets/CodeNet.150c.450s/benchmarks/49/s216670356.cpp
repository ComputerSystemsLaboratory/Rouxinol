#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;

  while(cin>>n && n){
    int nmax=0,nmin=100000,s,ans=0;
    for(int i=0;i<n;i++){
      cin>>s;
      ans+=s;
      nmax=max(nmax,s);
      nmin=min(nmin,s);
    }
    cout<<(ans-nmax-nmin)/(n-2)<<endl;
  }

  return 0;
}