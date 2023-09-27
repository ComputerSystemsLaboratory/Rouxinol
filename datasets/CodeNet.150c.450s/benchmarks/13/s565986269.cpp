#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    s += s;
    s.erase(s.size() - 1, 1);

    string::size_type pos = s.find(p);
    if (pos != string::npos) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}