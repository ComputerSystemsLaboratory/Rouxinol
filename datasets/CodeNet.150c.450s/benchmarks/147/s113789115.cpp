//lunchtime june Increasing and Decreasing
//<<  <  ,
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <algorithm>
#include <math.h>
#include <string>
#define pi 3.1415926535897932384626
#include <cmath>
#define test(t) while(t--)
#define MOD 1000000007
#define ll  long long int

#define in  cin>>
#define out cout<<
#define en "\n"
#define sp " "
#define pb push_back
#define fast()  ios_base::sync_with_stdio(false);cin.tie(0);
#define double long double

using namespace std;
ll form(ll n){
return (n*(n+1))/2;
}
ll exponent(ll base, ll power){
   ll res = 1;
  ll m = 1000000007;
   while(power){
    if(power&1)
        res = (res*base)%m;
    base= (base*base)%m;
    power=power>>1;
   }
return res;}
bool count_one(ll n){
    ll cnt = 0;
    while(n>0){
            cnt+=1;
       n= n&(n-1);

    }
    if(cnt>1)
        return true;
    return false;
}


void solve()
{   ll n;
    in n;
    ll a[10010]={0};
    for(ll i=1;i<=200;i++){
        for(ll j=1;j<=200;j++){
            for(ll k=1;k<=200;k++){
                ll check=pow(i,2)+pow(j,2)+pow(k,2)+i*j+j*k+k*i;
                if(check<10010)
                   a[check]++;
            }
        }
    }
    for(ll i=1;i<=n;i++){
        out a[i]<<en;
    }
}




int main(){ fast()
             //freopen("input.txt","r",stdin);
             //freopen("output.txt","w",stdout);
             ll t=1;
            //cin>>t;
            test(t){
            solve();
            }
return 0;}
