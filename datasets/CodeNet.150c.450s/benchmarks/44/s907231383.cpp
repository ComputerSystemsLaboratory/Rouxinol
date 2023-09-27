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

int main() {
    int s;
    while (cin >> s) {
        int a[4];
        int b[4];
        a[0] = s;
        REP(i,3) cin >> a[i+1];
        REP(i,4) cin >> b[i];
        
        int hit = 0;
        REP(i,4) {
            if (a[i] == b[i]) hit++;
        }
        
        int blow = 0;
        REP(i,4) {
            if (find(begin(a), end(a), b[i]) != end(a)) {
                if (b[i] != a[i]) blow++;
            }
        }
        
        cout << hit << " " << blow << endl;
    }
    return 0;
}