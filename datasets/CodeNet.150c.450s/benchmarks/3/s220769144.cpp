#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string str;
    int q;
    cin >> str >> q;
    REP(i, q) {
        string c;
        cin >> c;
        int a, b, l;
        cin >> a >> b;
        l = b - a + 1;
        if (c == "print") cout << str.substr(a, l) << endl;
        else if (c == "reverse") {
            string tmp = str.substr(a, l);
            reverse(tmp.begin(), tmp.end());
            str.replace(a, l, tmp);}
        else if (c == "replace") {
            string p;
            cin >> p;
            str.replace(a, l, p);}
    }
}