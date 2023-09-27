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

vector<int>primes;
vector<int>res;
const int MA=10000000;
bool t[MA];

void init(){
  for(int i=2;i*i<MA;i++){
    if(t[i]==0){
      primes.pb(i);
      for(int j=i*2;j*j<MA;j+=i){
        t[j]=1;
      }
    }
  }
}

void calc_soinsu(ll n){

  for(int i=0;i<primes.size();i++){
    while((n%primes[i])==0){
      res.pb(primes[i]);
      n/=primes[i];
    }
  }
  if(n!=1)res.pb(n);
}

int main(){
  ll n;
  cin>>n;
  init();
  //rep(i,primes.size())cout<<primes[i]<<"_";
  calc_soinsu(n);
  cout<<n<<":";
  rep(i,res.size()){
    cout<<" "<<res[i];
  }
  cout<<endl;
  return 0;
}

