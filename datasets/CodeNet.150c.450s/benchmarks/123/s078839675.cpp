#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>getPrime(int n){
  vector<bool>used(n+1,0);

  for(int i=2;i*i<=n;i++)
    if(!used[i])
      for(int j=2;j<=n/i;j++)used[i*j]=1;

  vector<int> res;
  for(int i=2;i<=n;i++)if(!used[i])res.push_back(i);

  return res;
}

bool isPrime(ll n){
  for(ll i=2;i*i<=n;i++)
    if(n%i==0) return 0;
  return 1;
}

int main(){
  int n;
  cin>>n;
  int ans=0,a;
  while(n--)cin>>a,ans+=isPrime(a);
  cout<<ans<<endl;
  

  return 0;
}