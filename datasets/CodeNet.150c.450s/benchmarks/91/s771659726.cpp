#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int ans[999999];

bool isprime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    FOR(i, 1, 999999) {
        ans[i] = ans[i-1] + isprime(i+1);
    }
    int i;
    while(cin >> i) {
        cout << ans[i-1] << endl;
    }
    return 0;
}