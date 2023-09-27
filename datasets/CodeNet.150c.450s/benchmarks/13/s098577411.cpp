#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s, p;
    cin >> s;
    cin >> p;
    string s2 = s + s;
    // cout << s2 << endl;
    int m = s2.find(p);
    if(m != s2.npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
