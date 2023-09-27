#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    int alp[26] = {};

    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] < 'A') continue;
            if (s[i] < 'a') alp[s[i] - 'A']++;
            else alp[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        cout << c << " : " << alp[i] << endl;
    }

    return 0;
}