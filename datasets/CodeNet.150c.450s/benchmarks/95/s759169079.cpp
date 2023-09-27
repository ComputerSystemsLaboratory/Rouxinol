#include <iostream>
using namespace std;

int main(void) {
    int n;
    string s;

    while (1) {
        cin >> n;
        if (n == 0) break;

        int l = 0; int r = 0;
        int f = -1;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s[0] == 'l') {
                l = (l + 1) % 2;
                if (r == l && f == 1) cnt++;
                f = 0;
            }
            else {
                r = (r + 1) % 2;
                if (r == l && f == 0) cnt++;
                f = 1;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}