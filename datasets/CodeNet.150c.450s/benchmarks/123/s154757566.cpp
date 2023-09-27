#include<iostream>
using namespace std;
  
bool isP(int x){
  if(x==0||x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}
  
int main(){
  int n,a,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    cnt+=isP(a);
  }
  cout<<cnt<<endl;
}
