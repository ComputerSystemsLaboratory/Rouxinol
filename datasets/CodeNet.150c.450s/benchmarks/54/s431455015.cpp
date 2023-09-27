#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    string t;
    int cnt = 0;
    cin >> t;
    while (cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == t)
            cnt++;
    }
    cout << cnt << "\n";
}