#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    string s;

    char ntoc[9][6] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    cin >> n;

    while(n-- && cin >> s) {

        int len = s.size();
        int p = -1;

        for(int i = 0; i < len; ++i) {
            if(p == -1) {
                if(s[i] != '0') {
                    p = (s[i] - '1') * 10;
                }
            } else {
                if(s[i] == '0') {
                    cout << ntoc[p / 10][p % 10];
                    p = -1;
                } else {
                    p = (p / 10 * 10) + (p % 10 + 1) % strlen(ntoc[p / 10]);
                }
            }
        }

        cout << endl;

    }

}