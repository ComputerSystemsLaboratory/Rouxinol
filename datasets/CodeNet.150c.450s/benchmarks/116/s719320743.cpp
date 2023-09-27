#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve16(int a, int b) {
    vector<int> v;
    REP(i,a) {
        int j;
        cin >> j;
        v.push_back(j);
    }
    vector<long> vl;
    long s = 0;
    REP(i, b) {
        s += v[i];
    }
    vl.push_back(s);
    REP(i,a-b) {
        s -= v[i];
        s += v[b+i];
        vl.push_back(s);
    }
    sort(vl.begin(), vl.end(), greater<long>());
    cout << vl[0] << endl;
}

int main() {
    int a, b;
    while(cin >> a >> b, a+b) {
        solve16(a, b);
    }
    return 0;
}