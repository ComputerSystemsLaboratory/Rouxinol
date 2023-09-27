#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (auto x : s) {
        if (islower(x))
            cout << (char)toupper(x);
        else if (isupper(x))
            cout << (char)tolower(x);
        else
            cout << x;
    }
    cout << endl;
}
