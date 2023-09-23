//Space Coconut Grab
#include<bits/stdc++.h>
using namespace std;

#define INF 10000000
typedef long long ll;

//x^t
ll mypow(ll x, ll t){
  return (ll)pow((double)x, (double)t);
}

ll ans[1000001];

int main(){
  for(ll i=0; i<=1000000; i++)ans[i]=INF;
  for(ll z=0; mypow(z, 3)<=1000000; z++){
    ll tmp;
    for(ll y=0; (tmp=mypow(z,3)+mypow(y,2))<=1000000; y++)
      if(ans[tmp]>y+z)
        ans[tmp]=y+z;
  }
  while(true){
    ll e;
    cin>>e;
    if(e==0)break;
    ll mn=INF;
    for(int i=0; i<=e; i++)
      if(mn>ans[i]+(e-i))mn=ans[i]+(e-i);
    cout<<mn<<endl;
  }
  return 0;
}