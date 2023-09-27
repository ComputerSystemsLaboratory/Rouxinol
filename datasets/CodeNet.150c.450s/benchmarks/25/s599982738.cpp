#include <iostream>

using namespace std;

namespace {
    const int offset = 97;
}

int main() {
    int res[26] = {0};
    while(true) {
        string s;
        cin >> s;
        if (cin.eof())
            break;
        
        for (char& c : s) {
            int i = static_cast<int>(tolower(c));
            res[i-offset]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        char c = static_cast<char>(i+offset);
        cout << c << " : " << res[i] << endl;
    }
    return 0;
}