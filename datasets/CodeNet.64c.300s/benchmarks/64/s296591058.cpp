#include <iostream>
using namespace std;


int gcd(int m,int n){
  if(m==n) return m;

  if(m>n) return gcd(m-n,n);
  else
    return gcd(m,n-m);
}



int main(){
  int a,b;
  cin>>a>>b;

  cout <<gcd(a,b)<<endl;
}