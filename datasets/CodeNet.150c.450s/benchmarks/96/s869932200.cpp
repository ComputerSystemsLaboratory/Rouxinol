#include"bits/stdc++.h"
using namespace std;
using ll = int64_t;

int main() {
    int L;
    cin >> L;

    vector<vector<char>> table(10, vector<char>());
    table[1].push_back('.');
    table[1].push_back(',');
    table[1].push_back('!');
    table[1].push_back('?');
    table[1].push_back(' ');
    for (int i = 2; i <= 7; i++) {
        for (int j = 0; j < 3; j++) {
            table[i].push_back('a' + (i - 2) * 3 + j);
        }
    }
    table[7].push_back('s');
    table[8].push_back('t');
    table[8].push_back('u');
    table[8].push_back('v');
    table[9].push_back('w');
    table[9].push_back('x');
    table[9].push_back('y');
    table[9].push_back('z');


    for (int i = 0; i < L; i++) {
        string s;
        cin >> s;

        int kind = -1, num = -1;
        for (char c : s) {
            if (c == '0') {
                if (kind != -1) {
                    printf("%c", table[kind][num % table[kind].size()]);
                }
                kind = -1;
                num = -1;
            } else {
                kind = c - '0';
                num++;
            }
        }
        cout << endl;
    }
}
