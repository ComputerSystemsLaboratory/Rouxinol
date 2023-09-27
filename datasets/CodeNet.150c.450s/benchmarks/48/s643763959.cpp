#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
  int x,y,z,minm=100000000,e;
  while(true){
    minm=1000000;
    cin>>e;
    if(e==0)break;
    for(z=0; z*z*z<=e; z++){
      for(y=0; y*y+z*z*z<=e; y++){
	x = e-y*y-z*z*z;
	if(x>=0) minm = min(minm,x+y+z);
      }
    }
    cout<<minm<<endl;
  }
  return 0;
}

