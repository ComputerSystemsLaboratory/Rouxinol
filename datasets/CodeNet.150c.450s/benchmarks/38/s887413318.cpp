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

bool isright(int a, int b, int c) {
    if (a*a + b*b == c*c) return true;
    if (a*a + c*c == b*b) return true;
    if (c*c + b*b == a*a) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        int a, b, c;
        cin >> a >> b >> c;
        if (isright(a,b,c)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}