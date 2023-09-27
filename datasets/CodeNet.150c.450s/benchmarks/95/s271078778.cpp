#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    while (cin >> n, n) {
        int cnt = 0;
        int l = 0, r = 0;
        int nl = 1, nr = 1;
        for (int i=0; i<n; ++i) {
            cin >> s;
            if (s == "lu") {
                l = 1;
            } else if (s == "ru") {
                r = 1;
            } else if (s == "ld") {
                l = 0;
            } else if (s == "rd") {
                r = 0;
            }
            if (l == nl && r == nr) {
                cnt ++;
                nl = 1 - l, nr = 1 - r;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}