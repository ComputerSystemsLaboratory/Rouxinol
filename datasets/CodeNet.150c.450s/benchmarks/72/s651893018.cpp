#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c >= 0x41 && c <= 0x5a) c += 0x20;
        else if (c >= 0x61 && c <= 0x7a) c -= 0x20;
        cout << c;
    }
    cout << endl;
}

