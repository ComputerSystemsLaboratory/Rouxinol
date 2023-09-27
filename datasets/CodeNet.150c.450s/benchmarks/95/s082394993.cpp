#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    string op;

    // (ld,rd) = 0, (lu,rd) = 1, (lu,ru) = 2, (ld,ru) = 3
    while (cin >> n, n) {
        int cnt = 0, state = 0;
        bool isDown = true;

        for (int i = 0; i < n; ++i) {
            cin >> op;
            if (op == "lu") {
                if (state == 0)
                    state = 1;
                else if (state == 3) {
                    state = 2;
                    if (isDown) {
                        ++cnt;
                        isDown = false;
                    }
                }
            }
            else if (op == "ld") {
                if (state == 1) {
                    state = 0;
                    if (!isDown) {
                        ++cnt;
                        isDown = true;
                    }
                }
                else if (state == 2)
                    state = 3;
            }
            else if (op == "ru") {
                if (state == 0)
                    state = 3;
                else if (state == 1) {
                    state = 2;
                    if (isDown) {
                        ++cnt;
                        isDown = false;
                    }
                }
            }
            else if (op == "rd") {
                if (state == 2)
                    state = 1; 
                else if (state == 3) {
                    state = 0;
                    if (!isDown) {
                        ++cnt;
                        isDown = true;
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}