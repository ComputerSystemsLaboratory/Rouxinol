#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
int p=1000,s=0;
  p-=n;
  s+=p/500;
  p%=500;
  s+=p/100;
  p%=100;
  s+=p/50;
  p%=50;
  s+=p/10;
  p%=10;
  s+=p/5;
  p%=5;
  s+=p/1;
  p%=1;
  cout<<s<<endl;}

}