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
    vector<int> v(100,0);
    int i;
    while(cin >> i) {
        v[i-1]++;
    }
    int m = 0;
    REP(i,100) {
        m = max(m, v[i]);
    }
    REP(i,100){
        if (v[i] == m) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}