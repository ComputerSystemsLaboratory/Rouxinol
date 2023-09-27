#include<iostream>
#include<cstdio>
using namespace std;
bool three(int x){
  if(x%3==0)return true;

  while(x>0){

    if(x%10==3)return true;
    x/=10;
  }
  return false;
}
int main(){

  int n;

  cin>>n;

  for(int i=1;i<=n;i++){

    if(three(i))cout<<" "<<i;

  }
cout<<endl;
    

  return 0;
}