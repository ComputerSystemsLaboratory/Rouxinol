#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (char &c: s) {
        if ('a' <= c && c <= 'z') {
            cout << (char) (c - 'a' + 'A');
        } else if ('A' <= c && c <= 'Z') {
            cout << (char) (c - 'A' + 'a');
        } else {
            cout << c;
        }
    }

    cout << endl;

    return 0;
}