#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = (n)-1; i >= 0; i--)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep1(i,n) for(int i = (n); i > 0; i--)

#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>

#define MOD 1000000007
#define INF 1000000000000000LL

using namespace std;

int main(){
  ll n;cin>>n;
  cout<<n<<':';

  vector<ll> results;
  for(ll i=2; i*i<=n;i++){
    if(n%i==0)while(n%i==0){
      results.push_back(i);
      n /= i;
    }
  }
  if(n>1)results.push_back(n);

  for(auto p: results)cout<<' '<<p;

  cout<<endl;

  return 0;
}

