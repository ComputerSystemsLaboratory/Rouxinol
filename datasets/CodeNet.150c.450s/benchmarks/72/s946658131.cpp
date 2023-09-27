#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (string::iterator it = str.begin(); it != str.end(); ++it) {
        if (0x41 <= *it && *it <= 0x5a) {
            cout << char(*it + 0x20);
            continue;
        }
        if (0x61 <= *it && *it <= 0x7a) {
            cout << char(*it - 0x20);
            continue;
        }
        cout << *it;
    }
    cout << endl;

    return 0;
}