#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,d[50];
  d[0]=d[1]=1;
  for(int i=0;i<43;i++)d[i+2]=d[i]+d[i+1];
  cin>>n;
  cout<<d[n]<<endl;
  return 0;
}