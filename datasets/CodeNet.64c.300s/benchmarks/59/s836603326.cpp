#include <iostream>
#include <math.h>
#define N 10000
using namespace std;

int isprime(int);

int main(){
  
  int i,n,x,count=0;

  cin>>n;

  for(i=0; i<n; i++){
  cin>>x;
  count+=isprime(x);
  }

  cout<<count<<endl;

return 0;

}

int isprime(int x){

if(x==2)return 1;
else if(x<2 || x%2==0)return 0;

int i=3;
for(i; i<=sqrt(x); i+=2)if(x%i==0)return 0;

return 1;

}