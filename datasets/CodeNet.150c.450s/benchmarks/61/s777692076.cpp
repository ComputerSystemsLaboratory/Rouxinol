#include <iostream>
#include <map>

using namespace std;

int a, b, c;

inline int next(int x)
{
    return (a * x + b) % c;
}

int main()
{
    int n, x;

    while (cin >> n >> a >> b >> c >> x, n || a || b || c || x) {
        int reel[100];
        int y, ans;
        bool flag = false;

        for (int i = 0; i < n; i++) 
            cin >> reel[i];

        y = ans = 0;
        for (int i = 0; i <= 10001; i++) {
            if (y == n) {
                flag = true;
                ans = i - 1;
                break;
            }

            if (reel[y] == x) 
                y++;
            x = next(x);
        }

        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}