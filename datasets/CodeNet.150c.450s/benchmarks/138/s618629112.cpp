#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(a % b == 0){return b;}
    ll c = a - b;
    return (c >= b)?gcd(c, b):gcd(b, c);
}

int main(){
    ll m, n;
    cin >> m >> n;
    
    ll ans = (m >= n)?gcd(m, n):gcd(n, m);
    
    cout << ans << endl;
    
}