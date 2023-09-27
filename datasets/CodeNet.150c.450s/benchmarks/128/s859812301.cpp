#include <bits/stdc++.h>

using namespace std;

#define REPR(i, n) for(int i = n; i >= 0; i--)

int main() {
    string s;
    cin >> s;
    REPR(i, s.size() - 1) cout << s[i];
    cout << endl;
    return 0;
}