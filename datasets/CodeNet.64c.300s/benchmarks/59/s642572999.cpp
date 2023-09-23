#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
  for(int i=2;i*i<=a;i++)if(a%i==0)return 0;
  return 1;
}

int main(){
  int n;
  cin>>n;
  int ans=0;
  while(n--){
    int num;
    cin>>num;
    ans+=isPrime(num);
  }
  cout<<ans<<endl;

  return 0;
}