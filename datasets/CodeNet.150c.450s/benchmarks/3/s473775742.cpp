#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string str;
    int q;
    cin >> str;
    cin >> q;
    string cmd, p;
    int a, b;
    for (int i = 0; i < q; i++) {
        cin >> cmd;
        if (cmd == "print") {
            cin >> a >> b;
            cout << str.substr(a, (b-a+1)) << "\n";
        }
        else if (cmd == "reverse") {
            cin >> a >> b;
            string sub = str.substr(a, (b-a+1));
            reverse(sub.begin(), sub.end());
            str = str.substr(0, a) + sub + str.substr(b+1);
        }
        else if (cmd == "replace") {
            cin >> a >> b >> p;
            str = str.substr(0, a) + p + str.substr(b+1);
        }
    }
}