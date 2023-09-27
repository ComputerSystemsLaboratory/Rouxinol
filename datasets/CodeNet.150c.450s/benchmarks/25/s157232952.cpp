#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s, in;
    while (cin >> in)
        s += in;
    for (char c = 'a'; c <= 'z'; c++)
        cout << c << " : " << count(s.begin(), s.end(), c) + count(s.begin(), s.end(), toupper(c)) << endl;
}
