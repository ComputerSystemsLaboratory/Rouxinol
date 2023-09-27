#include <iostream>
using namespace std;

int get_index(char c) {
    if (0x41 <= c && c <= 0x5a) {
        return int(c) - 0x41;
    }
    if (0x61 <= c && c <= 0x7a) {
        return int(c) - 0x61;
    }
    return 26;
}

int main() {
    char alpha[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                     'u', 'v', 'w', 'x', 'y', 'z' };

    int count[27] = { 0 };

    for (;;) {
        string str;
        getline(cin, str);
        if (str == "\0") break;

        for (string::iterator it = str.begin(); it != str.end(); ++it) {
            ++count[get_index(*it)];
        }
    }

    for (int i = 0; i < 26; ++i) {
        cout << alpha[i] << " : " << count[i] << endl;
    }
    return 0;
}