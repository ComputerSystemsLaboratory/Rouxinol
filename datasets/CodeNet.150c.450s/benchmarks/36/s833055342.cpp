#include<iostream>
using namespace std;
int n,sum,d;
int main(){
  while(cin>>n){
    sum=0;
    for(int i=0;i<600/n;i++){
      sum+=n*n*i*n*i;
    }
    cout<<sum<<endl;
  }
  return 0;
}