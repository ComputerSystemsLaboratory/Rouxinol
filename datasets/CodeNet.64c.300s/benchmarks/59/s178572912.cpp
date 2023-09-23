#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int x){
  if(x == 1)
    return 0; 
  if(x == 2)
    return 1;
  if(x == 3)
    return 1;
  if(x % 2 == 0)
    return 0;
  int i=3;

  while(i <= sqrt(x)){
    if( x % i == 0)
      return 0;
    i+=2;
  }
  return 1;
}

int main(){
  int x,n;
  int sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    sum += isPrime(x);
  }
  cout<<sum<<endl;

  return 0;
}