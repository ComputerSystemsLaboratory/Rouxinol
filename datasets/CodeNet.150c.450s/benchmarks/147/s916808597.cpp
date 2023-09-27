#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(10001);
    for (int x = 1; x <= 100; x++)
    {
        for (int y = 1; y <= 100; y++)
        {
            for (int z = 1; z <= 100; z++)
            {
                int t = x * x + y * y + z * z + x * y + y * z + z * x;
                if (t <= 10000)
                    a[t]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << "\n";

    return 0;
}
