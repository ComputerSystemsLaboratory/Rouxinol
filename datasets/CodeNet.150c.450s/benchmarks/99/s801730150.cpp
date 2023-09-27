#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{

    auto decode = [](const string& s) {
        stringstream ss;
        ss << s;
        int m = 0;
        int c = 0;
        int x = 0;
        int i = 0;
        while (true) {
            if (ss.peek() == char_traits<char>::eof()) {
                break;
            }
            int k = 1;
            if (isdigit(ss.peek())) {
                ss >> k;
            }
            char b;
            ss >> b;
            if (b == 'm') {
                m = k;
            }
            else if (b == 'c') {
                c = k;
            }
            else if (b == 'x') {
                x = k;
            }
            else {
                i = k;
            }
        }
        return m * 1000 + c * 100 + x * 10 + i;
    };

    auto encode = [](int n) {
        stringstream ss;
        if (n / 1000 == 1) {
            ss << 'm';
        }
        else if (n / 1000 > 1) {
            ss << (n / 1000) << 'm';
        }
        n %= 1000;
        if (n / 100 == 1) {
            ss << 'c';
        }
        else if (n / 100 > 1) {
            ss << (n / 100) << 'c';
        }
        n %= 100;
        if (n / 10 == 1) {
            ss << 'x';
        }
        else if (n / 10 > 1) {
            ss << (n / 10) << 'x';
        }
        n %= 10;
        if (n == 1) {
            ss << 'i';
        }
        else if (n > 1) {
            ss << n << 'i';
        }
        return ss.str();
    };

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << encode(decode(s1) + decode(s2)) << endl;
    }
}