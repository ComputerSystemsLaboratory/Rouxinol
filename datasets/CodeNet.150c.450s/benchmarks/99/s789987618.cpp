#include <bits/stdc++.h>
using namespace std;

bool chk(char c) {
    return ('2' <= c && c <= '9');
}

int conv(string s) {
    int res = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'm') {
            if (i == 0) res += 1000;
            else {
                string t = ""; t += s[i-1];
                res += atoi(t.c_str())*1000;
            }
        }
        else if (s[i] == 'c') {
            if (chk(s[i-1])) {
                string t = ""; t += s[i-1];
                res += atoi(t.c_str())*100;
            }
            else res += 100;
        }
        else if (s[i] == 'x') {
            if (chk(s[i-1])) {
                string t = ""; t += s[i-1];
                res += atoi(t.c_str())*10;
            }
            else res += 10;
        }
        else if (s[i] == 'i') {
            if (chk(s[i-1])) {
                string t = ""; t += s[i-1];
                res += atoi(t.c_str());
            }
            else res += 1;
        }
    }
    return res;
}

string solve(int s) {
    string res = "";

    int b[] = {1000, 100, 10, 1};
    char m[] = {'m', 'c', 'x', 'i'};

    for (int i = 0; i < 4; ++i) {
        int t = s/b[i];
        if (t == 0) continue;
        else {
            if (t == 1) res += m[i];
            else res += to_string(t)+m[i];
            s -= t*b[i];
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;
        cout << solve(conv(a)+conv(b)) << endl;
    }
}