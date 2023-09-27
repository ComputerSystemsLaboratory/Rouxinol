#include<iostream>
using namespace std;
int main(){
  int n,a=100000;
  cin>>n;
  for(int i=0;i<n;i++){
    a=(a+a*0.05);
    if(a%1000!=0){
    a/=1000;
    a++;
    }
    else a/=1000;
    a*=1000;
  }
    cout<<a<<endl;
  return 0;
}