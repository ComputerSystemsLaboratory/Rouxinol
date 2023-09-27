#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

uint8_t toggle(uint8_t c) {
    if (islower(c)) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}

int main() {
    string str;

    getline(cin, str);

    transform(str.cbegin(), str.cend(), str.begin(), toggle);

    cout << str << endl;

    return 0;
}