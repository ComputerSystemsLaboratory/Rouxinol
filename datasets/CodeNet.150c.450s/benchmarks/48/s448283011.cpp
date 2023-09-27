#include<iostream>
using namespace std;

int main(){
  while(1){
  int e,min=100000000,ans;
 cin>>e;
 if(e==0) break;
 for(int i=0;i*i*i<=e;i++){
   for(int j=0;j*j<=e;j++){
     ans=e-(i*i*i+j*j);
     if(min>ans+j+i && e>=ans && ans>=0) min=ans+i+j;
   }
 }
 cout<<min<<endl;
  }
 return 0;
}

  