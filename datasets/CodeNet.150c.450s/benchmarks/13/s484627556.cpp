#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string s, p;
    cin >> s >> p;
    s += s;
    if (strstr(s.c_str(), p.c_str())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}