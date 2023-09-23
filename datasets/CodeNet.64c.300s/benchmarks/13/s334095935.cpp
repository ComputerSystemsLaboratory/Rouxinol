#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(int argc,char* argv[]){
  int a=1,b=1,x,n;
  cin>>n;
  if(n==1)
    cout<<1<<endl;
  else{
    for(int i=2;i<=n;i++){
      x=a+b;
      a=b;
      b=x;
    }
    cout<<x<<endl;
  }
  return 0;
}