#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll rn = (ll)sqrt(n);
    
    cout << n << ":";
    
    for(ll i=2; i<=rn; ++i){
        while((n % i) == 0){
            cout << " " << i;
            n /= i;
            if(n == 1){ break; }
        }
    }
    if(n != 1){
        cout << " " << n;
    }
    
    cout << endl;
    
}