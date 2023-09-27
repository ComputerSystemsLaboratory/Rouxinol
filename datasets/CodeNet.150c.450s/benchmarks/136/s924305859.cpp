#include <iostream>
#include <cstdio>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if(b == 0) return(a);
    return(gcd(b, a % b));
}
ll lcm(ll m, ll n) {
    if(m == 0 || n == 0) return(0);
    return(m * n / gcd(m, n));
}
int main(void) {
    int a, b;
    
    while(scanf("%d %d", &a, &b) != EOF) {
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    
    return(0);
}