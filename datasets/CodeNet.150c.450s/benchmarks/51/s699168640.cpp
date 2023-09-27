#include<iostream>
using namespace std;
int main(){
  int t[31]={0},a;
  for(int i=0;i<28;i++)cin>>a,t[a]=1;
  for(int i=1;i<31;i++)if(t[i]==0)cout<<i<<endl;
  return 0;
}