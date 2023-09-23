#include <iostream>
using namespace std;

int a[4], b[4];

void solve(void)
{
    int hit = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == b[i]) {
            a[i] = 0;
            hit++;
        }
    }

    int blow = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i] == b[j]) {
                a[i] = 0;
                blow++;
            }
        }
    }

    cout << hit << ' ' << blow << endl;
}

int main()
{
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]
               >> b[0] >> b[1] >> b[2] >> b[3]) {
        solve();
    }
    return 0;
}