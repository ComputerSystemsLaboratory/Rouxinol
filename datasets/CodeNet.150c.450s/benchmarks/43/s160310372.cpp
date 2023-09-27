#include<iostream>
using namespace std;
int main(){
  int n,a=0,b=0,aa,bb;
  cin>>n;
  while(n!=0){
    for(int i=0;i<n;i++){
    cin>>aa>>bb;
    if(aa<bb){
      b+=aa+bb;
    }else if(aa>bb){
      a+=aa+bb;
    }else if(aa==bb){
      a+=aa;
      b+=bb;
    }
  }
    cout<<a<<" "<<b<<endl;
    cin>>n;
    a=0;
    b=0;
  }
  return 0;
}