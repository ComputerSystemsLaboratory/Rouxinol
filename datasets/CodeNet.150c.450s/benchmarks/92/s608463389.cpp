#include<iostream>
#include<stdio.h>
using namespace std;
int cnt;
int keta(int n){
  if(n>0){
    cnt++;
    return keta(n/10);
  }else{
    return cnt;
  }
}
int main(){
  int a,b;
  int n;
  while(scanf("%d %d",&a,&b)!=EOF){
    cnt=0;
    a+=b;
    n=keta(a);
    cout<<n<<endl;
  }
  return 0;
}