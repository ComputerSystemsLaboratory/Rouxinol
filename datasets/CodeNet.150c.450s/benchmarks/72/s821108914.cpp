#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char& c : s) {
        if (islower(c)) {
            c = (char) toupper(c);
        } else if (isupper(c)) {
            c = (char) tolower(c);
        }
    }
    cout << s << endl;

    return 0;
}