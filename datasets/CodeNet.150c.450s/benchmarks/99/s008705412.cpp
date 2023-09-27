#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int to_i(string n) {
    int ret = 0;

    int prev = 1;
    for (int i = 0; i < n.size(); i++) {
        switch (n[i]) {
            case 'm':
                ret += 1000 * prev;
                prev = 1;
                break;
            case 'c':
                ret += 100 * prev;
                prev = 1;
                break;
            case 'x':
                ret += 10 * prev;
                prev = 1;
                break;
            case 'i':
                ret += prev;
                prev = 1;
                break;
            default:
                prev = n[i] - '0';
                break;
        }
    }

    return ret;
}

string to_mcxi(int n) {
    string buf;
    int cm, cc, cx, ci;

    cm = n / 1000; n -= 1000 * cm;
    cc = n / 100;  n -= 100  * cc;
    cx = n / 10;   n -= 10   * cx;
    ci = n;

    if (cm == 1) {
        buf.push_back('m');
    } else if (cm >= 2) {
        buf.push_back(cm + '0');
        buf.push_back('m');
    }

    if (cc == 1) {
        buf.push_back('c');
    } else if (cc >= 2) {
        buf.push_back(cc + '0');
        buf.push_back('c');
    }

    if (cx == 1) {
        buf.push_back('x');
    } else if (cx >= 2) {
        buf.push_back(cx + '0');
        buf.push_back('x');
    }

    if (ci == 1) {
        buf.push_back('i');
    } else if (ci >= 2) {
        buf.push_back(ci + '0');
        buf.push_back('i');
    }

    return buf;
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string n, m; cin >> n >> m;
        cout << to_mcxi(to_i(n) + to_i(m)) << endl;
    }
    return 0;
}