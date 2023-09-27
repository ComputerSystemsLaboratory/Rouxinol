#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve9b(string s, int a) {
    int n = s.size();
    string ans = s;
    REP(i,a) {
        int h;
        cin >> h;
        string p, q;
        p = ans.substr(0, h);
        q = ans.substr(h, n-h);
        ans = q + p;
        
    }
    cout << ans << endl;
}

int main() {
    string s;
    int a;
    while(cin >> s >> a, s != "-") {
        solve9b(s, a);
    }
    return 0;
}