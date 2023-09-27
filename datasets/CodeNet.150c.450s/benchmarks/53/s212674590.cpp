#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll idx = 2;

map<ll, ll> prime_factor(ll n) {
    map<ll, ll> res;
    for(ll r = 2; r * r <= n; r++) {
        idx = r;
        while(n % r == 0) {
            res[r]++;
            n /= r;
        }
    }
    if(n != 1) res[n] = 1;
    return(res);
}

int main(void) {
    ll num; cin >> num;
    map<ll, ll> prime = prime_factor(num);
    cout << num << ": ";
    map<ll, ll>::iterator ite;
    map<ll, ll>::iterator temp;
    for(ite = prime.begin(); ite != prime.end(); ite++) {
        for(int r = 0; r < ite->second; r++) {
            cout << ite->first;
            temp = ite; temp++;
            if(temp != prime.end() || r != ite->second - 1) cout << " ";
        }
    }
    
    cout << endl;
    return(0);
}