#include <iostream>
#include <string>
using namespace std;

int main(void) {

    string button[10] = {
        "",
        ".,!? ",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        string str = "";
        pair<char, int> num;
        num.first = ' ';
        num.second = -1;

        for (auto x : s) {
            if (x == '0') {
                if (num.first == ' ') continue;

                int bi = num.first - '0';
                str += button[bi][num.second % button[bi].size()];

                num.first = ' ';
                num.second = -1;
                continue;
            }

            num.first = x;
            num.second++;
        }

        cout << str << endl;
    }

    return 0;
}