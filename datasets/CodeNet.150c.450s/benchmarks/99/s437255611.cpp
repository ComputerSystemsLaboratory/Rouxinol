#include <iostream>
#include <string>

using namespace std;

string n2m(int n) {
    string s = "";
    string p = "mcxi";
    string ns = "0123456789";
    int d;
    int e = 1000;
    for (int i=0; i<4; i++) {
        d = n/e;
        switch (d) {
            case 0:
                break;
            case 1:
                s += p.substr(i, 1);
                break;
            default:
                s += ns.substr(d, 1)+p.substr(i, 1);
                break;
        }
        n = n-d*e;
        e /= 10;
    }
    return s;
}

int m2n(string s) {
    int d = 1;
    int n = 0;
    for (int i=0; i<(int)s.length(); i++) {
        switch (s[i]) {
            case 'm':
                n += 1000*d;
                d = 1;
                break;
            case 'c':
                n += 100*d;
                d = 1;
                break;
            case 'x':
                n += 10*d;
                d = 1;
                break;
            case 'i':
                n += d;
                d = 1;
                break;
            default:
                d = s[i]-'0';
                break;
        }
    }
    return n;
}

int main() {
    int n, n1, n2;
    string s1, s2;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s1 >> s2;
        n1 = m2n(s1);
        n2 = m2n(s2);
        cout << n2m(n1+n2) << endl;
    }
    return 0;
}