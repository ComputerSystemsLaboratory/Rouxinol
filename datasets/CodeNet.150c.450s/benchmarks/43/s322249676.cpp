#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    int a,b;
    int aa=0,bb=0;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a>b){
	aa+=a+b;
      }else if(b>a){
	bb+=a+b;
      }else{
	aa+=a;
	bb+=b;
      }
    }
    cout<<aa<<' '<<bb<<endl;
  }
  return(0);
}
      

