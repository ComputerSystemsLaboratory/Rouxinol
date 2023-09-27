#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s, p;
    bool flag = false;
    getline(cin, s);
    getline(cin, p);
    s += s;
    for (int i = 0; i < s.size() - p.size(); i++) {
        if (s.substr(i, p.size()) == p) {
            flag = true;
            break;
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}