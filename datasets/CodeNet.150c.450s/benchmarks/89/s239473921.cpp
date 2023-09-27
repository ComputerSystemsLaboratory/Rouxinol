//Dirichlet's Theorem on Arithmetic Progressions
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int p[1000000];
vector<ll> prime;

int main(){
  memset(p, 0, sizeof(p));
  prime.push_back(2); p[2]=1;
  for(ll i=3; i<1000000; i+=2){
    bool flag=true;
    for(ll j=0; j<prime.size() && i>=prime[j]*prime[j]; j++){
      if(i%prime[j]==0){flag=false; break;}
    }
    if(flag){p[i]=1; prime.push_back(i);}
  }

  while(true){
    ll a, d, n;
    cin>>a>>d>>n;
    if(a==0&&d==0&&n==0)break;
    int cnt=0;
    ll ans=a-d;
    do{
      ans+=d;
      cnt+=p[ans];
    }while(cnt!=n);
    cout<<ans<<endl;
  }
}