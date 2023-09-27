#include<bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define pd(a,n) for(int i=0;i<n;i++)cout<<a[i]<<((i==n-1)?"\n":" ");cout<<endl;
#define pdd(a,n,m)for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<a[i][j]<<" ";cout<<endl;}
#define mp make_pair
#define pb push_back
#define ll long long
//#define __int64 lng long
#define P pair<int,int>
#define PP pair<P,int>

ll m,n;
ll MOD=1000000007LL;

ll pow(ll m,ll n){
  ll ret=1LL;
  if(n==0)
    return ret;

  if(n&1){
      ret=ret*pow(m*m%MOD,(n-1)/2);
      ret%=MOD;
      ret=ret*m;
      ret%=MOD;
  }
  else{
    ret=ret*pow(m*m%MOD,n/2);
    ret%=MOD;
  }

    return ret%MOD;
}
int main(){
  cin>>m>>n;
  cout<<pow(m,n)%MOD<<endl;

  return 0;
}


