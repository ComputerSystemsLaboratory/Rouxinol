#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string str;
    while (cin >> str, str != "0") {
        int s = 0;
        REP(i, str.size()) s += str[i] - '0';
        cout << s << endl;
    }
}