#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int m;
    int h;

    while(1) {
        cin >> s;
        if(s == "-") break;
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> h;
            s = s.substr(h) + s.substr(0, h);
        }
        cout << s << endl;
    }
}

