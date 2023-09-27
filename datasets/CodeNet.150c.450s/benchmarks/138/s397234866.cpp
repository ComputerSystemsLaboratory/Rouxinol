#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(a<b) swap(a,b);
  return b? gcd(b,a%b):a;
}

int main(){
  int x,y;
  cin>>x>>y;
  cout<<gcd(x,y)<<endl;
  return 0;
}