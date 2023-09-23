#include<bits/stdc++.h>
using namespace std;

int main(){
  int e;
  while(cin>>e && e){
  int m=1000000;
  for(int z=0;z*z*z<=e;z++){
    for(int y=0;y*y<=e-z*z*z;y++){
      int x=e-z*z*z-y*y;
      int n=x+y+z;
      if(n<=m){
        m=n;
      }
    }
  }
  cout<<m<<endl;
}
  return 0;
}

