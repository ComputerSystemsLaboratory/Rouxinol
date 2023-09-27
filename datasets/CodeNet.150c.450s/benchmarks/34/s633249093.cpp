#include<iostream>
using namespace std;
int main(){
  int fiv[31];
  fiv[0]=1;
  fiv[1]=1;
  fiv[2]=2;
  for(int i=3;i<=30;i++){
    fiv[i]=fiv[i-1]+fiv[i-2]+fiv[i-3];
  }
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    
    if(fiv[n]<=3650){
      cout<<'1'<<endl;
    }else{
      if(fiv[n]%3650==0){
	cout<<fiv[n]/3650<<endl;
      }else if(fiv[n]%3650!=0){
	cout<<(fiv[n]/3650) +1<<endl;
      }
    }
  }
}