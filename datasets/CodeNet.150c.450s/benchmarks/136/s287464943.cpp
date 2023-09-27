#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    return (a%b ? gcd(b,a%b) : b);
}

int main(){
    ll a,b;
    while(cin >> a >> b){
	ll c = gcd(a,b);
	cout << c << " " << a/c*b << endl;
    }
    return 0;
}