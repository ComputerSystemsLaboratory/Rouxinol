#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string s, t, c;
    int q, a, b;
    cin >> s >> q;
    for (int i = 0; i < q; i++) {
        cin >> c >> a >> b;
        if (c == "replace") {
            cin >> t;
            s.replace(a, b - a + 1, t);
        }
        if (c == "reverse") {
            t = s.substr(a, b - a + 1);
            reverse(t.begin(), t.end());
            s.replace(a, b - a + 1, t);
        }
        if (c == "print") {
            cout << s.substr(a, b - a + 1) << endl;
        }
    }
    return 0;
}