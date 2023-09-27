#include <iostream>
using namespace std;

int main(void) {
    string s;
    int i, c;
    while (1) {
        cin >> s;
        if (s == "0") break;
        c = 0;
        for (i = 0; i < s.size(); i++) {
            c += s[i] - '0';
        }
        cout << c << endl;
    }
    return 0;
}