#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
    int n;
    cin >> n;
    for (int p=1; p<=n; p++)
    {
        int res = 0;
        for (int x = 1; x*x + x*2 <= p ; x++)
        {
            for (int y = 1;  x*x + y*y + x*y + x + y <= p ; y++)
            {
                for (int z = 1; (x*x + y*y + z*z + x*y + y*z + z*x <= p) ; z++)
                    if (x*x + y*y + z*z + x*y + y*z + z*x == p)
                        res++;
            }
        }
        cout << res <<'\n';
    }
    return 0;
}