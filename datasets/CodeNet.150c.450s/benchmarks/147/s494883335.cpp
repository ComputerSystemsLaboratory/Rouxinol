//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int N = 6e4 +5;
ll ar[N];

void Mo35(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

void countVal(ll n){

    for(ll x=1; x<=n; ++x)
        for(ll y=1; y<=n; ++y)
            for(ll z=1; z<=n; ++z)
                ar[(x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(z*x)]++;

}

int main(){
Mo35();

    ll n; cin>> n; countVal(sqrt(n));
    for(ll i=1; i<=n;) cout<< ar[i++]<< "\n";

return 0;
}