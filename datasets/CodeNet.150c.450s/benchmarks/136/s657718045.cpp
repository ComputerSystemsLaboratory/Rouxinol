#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>

#define dprintf(s,...) printf("%s:%d" s,__func__,__LINE__,__VA_ARGS__)
using namespace std;

typedef pair<int,int> P;

const int N=10000;
long long int a,b;


long long int gcd(long long int x,long long int y){
  if(y==0) return x;
  return gcd(y,x%y);
}

int main(){


  while(1){

    cin>>a>>b;
    if(cin.eof()) break;

    long long int c,d;
    c=gcd(a,b);
    d=a*b/c;
    cout<<c<<" "<<d<<endl;
    
  }

  return 0;
}