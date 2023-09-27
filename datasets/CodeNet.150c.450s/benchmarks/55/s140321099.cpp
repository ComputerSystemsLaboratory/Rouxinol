#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s) {
        if (s == "0") break;
        int sum = 0;
        for (unsigned int i = 0; i < s.size(); i++) sum += s[i] - 0x30;
        cout << sum << endl;
    }
}

