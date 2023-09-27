#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int n;
    cin >> str >> n;

    for (;n--;) {
        string s, r;
        int a, b;
        cin >> s >> a >> b;
        if (s == "replace") {
            cin >> r;
            for (int i = a; i <= b; i++) {
                str[i] = r[i - a];
            }
        }
        if (s == "reverse") {
            string t = str.substr(a, b - a + 1);
            reverse(t.begin(), t.end());
            for (int i = a; i <= b; i++) {
                str[i] = t[i - a];
            }
        }
        if (s == "print") {
            for (int i = a; i <= b; i++) {
                cout << str[i];
            }
            cout << endl;
        }
    }

    return 0;
}