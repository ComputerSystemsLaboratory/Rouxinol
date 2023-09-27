#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    string str, com, phrase;
    int a, b, q;

    cin >> str >> q;
    REP(t, q) {
        cin >> com >> a >> b;
        if (com == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        } else if (com == "reverse") {
            string tmp = str.substr(a, b - a + 1);
            int n = tmp.size();
            REP(i, n) str[i + a] = tmp[n - i - 1];
        } else if (com == "replace") {
            cin >> phrase;
            str = str.replace(a, b - a + 1, phrase);
        }
    }
}