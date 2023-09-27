#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> keys = {
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

int main() {
    int C;
    cin >> C;

    while (C-- > 0) {
        string s;
        cin >> s;

        int pos = 0;
        string res = "";
        for (int i = 0; i < s.length() - 1; i++) {
            int k = stoi(s.substr(i, 1));
            if (k == 0) {

            } else if (s[i] == s[i + 1]) {
                pos++;
            } else {
                res += keys[k].substr(pos % keys[k].length(), 1);
                pos = 0;
            }
        }

        cout << res << endl;
    }
}