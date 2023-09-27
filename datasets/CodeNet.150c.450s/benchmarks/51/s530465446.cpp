#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int a;
  bool f[31]={};

  for(int i=0;i<28;i++){
    cin>>a;
    f[a]=true;
  }

  for(int i=1;i<=30;i++){
    if(!f[i]) cout<<i<<endl;
  }

  
  
  return 0;
}