#include <iostream>
#include <string>

using namespace std;

string i2m(int n) {
    char dc[4] = {'i', 'x', 'c', 'm'};
    string mstr = "";
    for (int i = 0; i < 4; ++i) {
        int d = n % 10;
        if (d > 0) {
            mstr = dc[i] + mstr;
        }
        if (d > 1) {
            mstr = char(d + '0') + mstr;
        }
        n /= 10;
    }
    return mstr;
}

int m2i(string s) {
    int n = 0;
    int d = 1;
    for (int i = 0; i < (int)s.length(); ++i) {
        if ('2' <= s[i] && s[i] <= '9') {
            d = s[i] - '0';
        } else {
            if (s[i] == 'm') {
                n += d * 1000;
            } else if (s[i] == 'c') {
                n += d * 100;
            } else if (s[i] == 'x') {
                n += d * 10;
            } else {
                n += d;
            }
            d = 1;
        }
    }
    return n;
}

int main() {
    int n;
    string s1, s2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        cout << i2m(m2i(s1) + m2i(s2)) << endl;
    }
    return 0;
}