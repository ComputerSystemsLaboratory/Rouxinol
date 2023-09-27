#include <iostream>
#include <vector>
#include <cstdio>
 
using namespace std;
 
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)

bool is_prime(int n) {
    if(n == 1) return false;
    else if(n == 2) return true;
    else if(n % 2 == 0) return false;

    for(int i=3; i*i <= n; i += 2) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i,n) {
        int a; cin >> a;
        if(is_prime(a)) ++ans;
    }

    cout << ans << endl;

    return 0;
}