#include<bits/stdc++.h>
using namespace std;
int main(){
  int e,m;
  int E,z;
  int mn=1000000;
  while(1){
    mn=1000000;
    cin>>e;
    if(e==0) break;
    for(int i=0;i*i*i<=e;i++){
      for(int j=0;(j*j)+(i*i*i)<=e;j++){
	z=e-(i*i*i)-(j*j);
	mn=min(mn,i+j+z);
      }
    }	 
  cout<<mn<<endl;
  }
  return 0;
}

