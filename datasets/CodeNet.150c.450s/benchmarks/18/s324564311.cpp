#include<iostream>
using namespace std;
int main(void){
  int n;
  int now=100000;
  int i,j;
  cin>>n;
  for(i=0;i<n;i++){
    now*=1.05;
    if(now%1000>=1){
      now+=1000;
      now/=1000;
      now*=1000;
    }
  }
  cout<<now<<endl;
  return 0;
}