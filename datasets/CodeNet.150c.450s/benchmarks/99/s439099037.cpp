#include <bits/stdc++.h>
using namespace std;

inline int decode(string& s) {
    int ret = 0;
    int tmp = 0;
    for (char& c: s) {
        switch (c) {
            case 'm':
                if (tmp)
                    ret += tmp * 1000;
                else
                    ret += 1000;
                tmp = 0;
                break;
            case 'c':
                if (tmp)
                    ret += tmp * 100;
                else
                    ret += 100;
                tmp = 0;
                break;
            case 'x':
                if (tmp)
                    ret += tmp * 10;
                else
                    ret += 10;
                tmp = 0;
                break;
            case 'i':
                if (tmp)
                    ret += tmp * 1;
                else
                    ret += 1;
                tmp = 0;
                break;
            default:
                tmp = c - 48;
                break;
        }
    }
    return ret + tmp;
}

inline string encode(int n) {
    string ret;
    char c;
    c = n / 1000;
    if (c) {
        if (c != 1) {
            ret += (c + 48);
        }
        ret += 'm';
    }
    n %= 1000;
    c = n / 100;
    if (c) {
        if (c != 1) {
            ret += (c + 48);
        }
        ret += 'c';
    }
    n %= 100;
    c = n / 10;
    if (c) {
        if (c != 1) {
            ret += (c + 48);
        }
        ret += 'x';
    }
    n %= 10;
    c = n;
    if (c) {
        if (c != 1) {
            ret += (c + 48);
        }
        ret += 'i';
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cout << encode(decode(a) + decode(b)) << endl;
    }
    return 0;
}

