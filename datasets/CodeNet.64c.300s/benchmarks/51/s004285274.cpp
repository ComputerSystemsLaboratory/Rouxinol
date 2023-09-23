#include<iostream>

using namespace std;

long long factorial(long long n){
  long long int ans;
  if(n==0)
    ans=1;
  else
    ans =n*factorial(n-1);
  return ans;
}

int main(){
  long long  n=0;
  cin>>n;

  long long int ans=1;
  ans=factorial(n);

  cout<<ans<<endl;
}