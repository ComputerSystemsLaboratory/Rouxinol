#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,x,y,z,cnt;
  cin>>N;
  int C[10100]={};

  for(x=1;x<=100;x++){
    for(y=1;y<=100;y++){
      for(z=1;(x*x+y*y+z*z+x*y+x*z+y*z)<=10010;z++){
        C[x*x+y*y+z*z+x*y+x*z+y*z]++;
      }
    }
  }
  for(int i=1;i<=N;i++){
    cout<<C[i]<<endl;
  }
  
  return 0;
}
