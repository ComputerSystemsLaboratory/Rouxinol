#include <stdio.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    set<string> us;
    int n;
    cin >> n;
    rep (i, n) {
        string s;
        cin >> s;
        us.insert(s);
    }
    int m;
    cin >> m;
    bool f = false;
    rep (i, m) {
        string s;
        cin >> s;
        if (us.count(s)) {
            cout << (f ? "Closed" : "Opened") << " by " << s << endl;
            f = !f;
        }
        else {
            cout << "Unknown " << s << endl;
        }
    }
    return 0;
}