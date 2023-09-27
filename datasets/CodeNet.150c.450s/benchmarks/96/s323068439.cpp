#include <iostream>
#include <string>

using namespace std;

string solve(string s) {
    int num = -1;
    int count = 0;
    string message = "";
    string chars[] = {
        ".,!? ", "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };
    for (int i = 0; i < (int)s.length(); ++i) {
        if (s[i] == '0') {
            if (num > 0) {
                int len = chars[num - 1].length();
                message += chars[num - 1][(count + len - 1) % len];
            }
            count = 0;
            num = -1;
        } else {
            ++count;
            num = s[i] - '0';
        }
    }
    return message;
}

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}