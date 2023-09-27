#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
  long long r = a%b;
  if(r!=0) return gcd(b,r);
  else if(r==0) return b;
}

long long lcm(long long a,long long b,long long g){
  return a * b / g;
}

int main(){
  long long a,b;

  if(a<b) swap(a,b); 
  
  while(cin>>a>>b){
    long long g = gcd(a,b);
    cout<<g<<" "<<lcm(a,b,g)<<endl;
  }

  return EXIT_SUCCESS;
}