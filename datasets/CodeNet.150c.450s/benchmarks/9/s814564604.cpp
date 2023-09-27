#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int m, h;
    while (cin >> s && s != "-") {
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> h;
            s = s.substr(h) + s.substr(0, h);
        }
        cout << s << "\n";
    }
}