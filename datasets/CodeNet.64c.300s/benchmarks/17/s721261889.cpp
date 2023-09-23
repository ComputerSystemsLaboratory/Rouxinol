#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    while (1)
    {
        int x, y, s;
        cin >> x >> y >> s;
        if (x + y + s == 0) return 0;
        int ans = 0;
        for (int i = 1; i < s; ++i)
        {
            for (int j = 1; j < s; ++j)
            {
                if (i * (100 + x) / 100 + j * (100 + x) / 100 == s)
                {
                    ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}