#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int x = 1; x*x <= i; x++)
        {
            for (int y = 1; y * y <= i; y++)
            {
                int b = x + y, c = i - x*x - y*y - x*y;
                if(c > 0)
                {
                    double z = (-b + sqrt(b * b + 4 * c)) / 2;
                    if (ceil(z) == floor(z)) cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}