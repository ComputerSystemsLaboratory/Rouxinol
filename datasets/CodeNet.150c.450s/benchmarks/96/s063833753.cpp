#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s[10] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

char p(int n, int times) {
    return s[n][(times - 1) % (int)s[n].size()];
}

int main() {
    int N;
    cin >> N;
    string msg;
    while (N --) {
        cin >> msg;
        string t = "";
        for (int i=0; i<(int)msg.size(); ++i) {
            if (msg[i] == '0') {
                if (t != "") {
                    cout << p(t[0] - '0', t.size());
                    t = "";
                }
            } else {
                t += msg[i];
            }
        }
        cout << endl;
    }
    return 0;
}