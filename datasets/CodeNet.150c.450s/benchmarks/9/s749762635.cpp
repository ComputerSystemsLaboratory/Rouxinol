#include <iostream>

using namespace std;

int main() {
    while(true) {
        string s;
        cin >> s;

        if (s == "-")
            break;

        int count;
        cin >> count;

        for (int i = 0; i < count; i++) {
            unsigned long h;
            cin >> h;
            s = s.substr(h) + s.substr(0,h);
        }

        cout << s << endl;
    }
    return 0;
}