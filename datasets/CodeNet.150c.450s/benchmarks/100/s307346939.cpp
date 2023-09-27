#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ll n, x=1;
    cin >> n;
    for(ll i=n; i>=1; i--){
        x*=i;
    }
    cout << x << "\n";
}

