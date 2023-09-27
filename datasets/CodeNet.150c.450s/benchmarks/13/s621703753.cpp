#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, patt, subs;
    cin >> str >> patt;
    bool flag = false;
    
    for (long unsigned int i = 0; i < str.length(); i++) {
        if (str.length() - i < patt.length()) {
            subs = str.substr(i) + str.substr(0, patt.length() - str.length() + i);
        } else {
            subs = str.substr(i, patt.length());
        }
        if (patt == subs) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
