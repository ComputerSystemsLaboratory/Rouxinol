#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count[26] = {};
    while (getline(cin, s)) {
        for (int i = 0; i < int(s.size()); i++) {
            char c = s[i];
            if (0x41 <= c && c <= 0x5a) count[c - 0x41] += 1;
            else if (0x61 <= c && c <= 0x7a) count[c - 0x61] += 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << char(i + 0x61) << " : " << count[i] << endl;
    }
}

