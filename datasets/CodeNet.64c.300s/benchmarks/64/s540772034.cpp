#include<iostream>
using namespace std;
int gcd(long long ,long long);
int main(){
  long long a,b,c;
  while(cin>>a>>b){
  c=gcd(a,b);
  cout<<c<<endl;
  }
  return 0;
}

int gcd(long long x,long long y){
  while(x!=y){
    if(x>y){
      x=x%y;
      if(x==0) return y;
    }
    else{
      y=y%x;
      if(y==0) return x;
    }
  }
  return x;
}