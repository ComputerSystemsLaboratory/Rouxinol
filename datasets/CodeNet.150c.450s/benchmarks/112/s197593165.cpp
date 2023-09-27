#include <bits/stdc++.h>
using namespace std;
int n, q;
int main() {
    while(cin >> n, n) {
        map<char, char> conversion;
        for(int i = 0; i < 128; i++) conversion[i] = i;
        string c, d;
        while(n--) cin >> c >> d, conversion[c[0]] = d[0];
        cin >> q;
        while(q--) cin >> c, cout << conversion[c[0]];
        cout << endl;
    }
}