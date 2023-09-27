#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, p;

    cin >> s >> p;

    if ((s + s).find(p) == (size_t) -1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}