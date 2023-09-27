#include <iostream>
#include <string>
using namespace std;

int main() {
    int m;
    string s, s1, s2;

    while (1) {
        cin >> s;
        if (s == "-") break;
        cin >> m;
        for (int i = 0; i < m; i++) {
            int h;
            cin >> h;
            s1 = s.substr(0, h);
            s2 = s.substr(h, s.size()-h);
            s = s2 + s1;
        }
        cout << s << endl;
    }
    return 0;
}

