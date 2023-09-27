#include <iostream>
using namespace std;

int main() {
    for (;;) {
        string str;
        getline(cin, str);

        if (str == "0") break;

        int tmp = 0;
        for (string::iterator it = str.begin(); it != str.end(); ++it) {
            if (0x30 <= *it && *it <= 0x39) {
                tmp += int(*it) - 0x30;
            } else {
                cout << "?";
            }
        }
        cout << tmp << endl;
    }

    return 0;
}