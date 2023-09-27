#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve8b(string a) {
    int s = 0;
    REP(i,a.size()) {
        s += a[i] - '0';
    }
    cout << s << endl;
}

int main() {
    string a;
    while(cin >> a) {
        if (a == "0") break;
        solve8b(a);
    }
    return 0;
}