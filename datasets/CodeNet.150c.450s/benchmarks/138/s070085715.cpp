#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll,ll);

int main(){
  ll x,y;
  cin>>x>>y;
  if(x<y) swap(x,y);
  cout<<gcd(x,y)<<endl;
  return 0;
}

ll gcd(ll a,ll b){
  if(a%b==0) return b;
  return gcd(b,a%b);
}
  

