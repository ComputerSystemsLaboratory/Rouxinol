#include<iostream>
using namespace std;
long long gcd(long long ,long long);
int main(){
  long long a,b,c,d;
  while(cin>>a>>b){

  c=gcd(a,b);
  d=a*(b/c);
  cout<<c<<' '<<d<<endl;
  }
  return 0;
}

long long gcd(long long x,long long y){
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