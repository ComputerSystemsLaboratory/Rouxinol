#include <iostream>
using namespace std;

void print(int a, int b, string str) {
    cout << str.substr(a, b - a + 1) << endl;
}

string reverse(int a, int b, string str) {
    string tmp = "";

    for (int i = 0; i < str.length(); ++i) {
        if (i < a || b < i) {
            tmp.append(1, str[i]);
        } else {
            tmp.append(1, str[b + a - i]);
        }
    }

    return tmp;
}

string replace(int a, int b, string p, string str) {
    string h = str.substr(0, a);
    string t = str.substr(b + 1, string::npos);
    return h + p + t;
}

int main() {
    string str;
    cin >> str;

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string cmd;
        cin >> cmd;

        if (cmd == "print") {
            int j, k;
            cin >> j >> k;

            print(j, k, str);
            continue;
        }
        if (cmd == "reverse") {
            int j, k;
            cin >> j >> k;

            str = reverse(j, k, str);
            continue;
        }
        if (cmd == "replace") {
            int j, k;
            cin >> j >> k;

            string p;
            cin >> p;

            str = replace(j, k, p, str);
            continue;
        }
    }

    return 0;
}