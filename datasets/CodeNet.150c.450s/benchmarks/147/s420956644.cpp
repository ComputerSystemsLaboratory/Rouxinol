#include<bits/stdc++.h>
typedef long long ll;
#define F(i,L,R) for (ll i = L; i < R; i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define re(x) scanf("%lld",&x)
using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin>>n;
  vector<ll> val(n+1,0);

  F(i,1,101) F(j,i,101) F(k,j,101) if(i*i + j*j + k*k + i*j + j*k + k*i <= n) {
      ll comb = 6;
      if(i==j && j == k) comb = 1;
      else if(i == j || j == k || i == k) comb = 3;

      val[i*i + j*j + k*k + i*j + j*k + k*i]+= comb;
  }


  F(i,1,n+1) cout<<val[i]<<endl;

  return 0;

}
