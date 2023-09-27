#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main(void) {

    string word;
    int n;
    cin >> word >> n;

    for (int _ = 0; _ < n; ++_) {
        string op;
        int b, e;
        cin >> op >> b >> e;
        if (op == "replace") {
            string sub;
            cin >> sub;
            word.replace(b, sub.size(), sub);
        }
        else if (op == "reverse") {
            reverse(word.begin() + b, word.begin() + e + 1);
        }
        else if (op == "print") {
            cout << word.substr(b, e - b + 1) << endl;
        }
    }

    return 0;
}