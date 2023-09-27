#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;

    s += s;

    for (int i = 0; i < s.length() - p.length(); i++) {
        if (s.substr(i, p.length()) == p) return cout << "Yes" << endl, 0;
    }
    cout << "No" << endl;

    return 0;
}