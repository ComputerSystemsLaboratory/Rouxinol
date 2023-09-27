#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

// a^n mod を計算する
long modpow(long a,long n,long mod){
  long ans=1;
  while (n>0){
    if(n&1) ans=ans*a%mod;//1と共通のビットが1の時。つまり1の位が1
    a=a*a%mod;
    n=n/2;
  }
  return ans; 
}

int main(){
  long n,m;
  cin>>m>>n;
  
  cout<<modpow(m,n,1000000007)<<endl;
}

