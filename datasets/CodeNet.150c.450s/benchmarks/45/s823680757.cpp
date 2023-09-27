#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define NUM 1000000007
typedef long long ll;

ll multiply(ll p, ll q) {
    return ((p % NUM) * (q % NUM)) % NUM;
}
// p^q
ll pow(ll p, ll q) {
    if (q == 0) return 1;
    else if (q == 1) return (p % NUM);
    else if (q == 2) return multiply(p, p);
    if (q % 2 == 0) {
        ll r = pow(p, q/2);
        return multiply(r, r);
    } else {
        return multiply(p, pow(p, q-1));
    }
}

int main(void) {
    ll m, n;
    cin >> m >> n;
    cout << pow(m, n) << endl;
    return 0;
}