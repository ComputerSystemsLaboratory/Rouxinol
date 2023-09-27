#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, string> keys;

int main() {
    keys['1'] = ".,!? ";
    keys['2'] = "abc";
    keys['3'] = "def";
    keys['4'] = "ghi";
    keys['5'] = "jkl";
    keys['6'] = "mno";
    keys['7'] = "pqrs";
    keys['8'] = "tuv";
    keys['9'] = "wxyz";

    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        string out;
        char outc = '\0';
        int n = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            char inc = s[i];
            if (inc == '0') {
                if (outc != '\0') {
                    out += outc;
                }
                n = 0;
                outc = '\0';
            } else {
                outc = keys[inc][n++ % keys[inc].size()];
            }
        }
        cout << out << endl;
    }
}