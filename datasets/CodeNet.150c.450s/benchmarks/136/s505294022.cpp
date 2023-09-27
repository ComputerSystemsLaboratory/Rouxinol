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

long GCD(long a, long b) {
    if (b % a) return GCD(b % a, a);
    else return a;
}

long LCM(long a, long b) {
    return a / GCD(a, b) * b;
}

int main() {
    long a, b;
    while(cin >> a >> b) {
        cout << GCD(a,b) << " " << LCM(a,b) << endl;
    }
    return 0;
}