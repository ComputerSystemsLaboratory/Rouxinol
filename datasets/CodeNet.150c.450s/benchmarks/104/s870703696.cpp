#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int W,n;
  cin>>W;
  int num[W+1];
  for(int i=1;i<=W;i++){
    num[i]=i;
  }
  cin>>n;
  int change1=0,change2=0;
  int alt=0;
  for(int i=0;i<n;i++){
    scanf("%d,%d",&change1,&change2);
    alt=num[change1];
    num[change1]=num[change2];
    num[change2]=alt;
  }
  for(int i=1;i<W+1;i++){
    cout<<num[i]<<endl;
  }
  return 0;
}