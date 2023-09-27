#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> ans(n+1);
    for (int x = 1; x <= 100; x++)
    {
        for (int y = 1; y <= 100; y++)
        {
            for (int z = 1; z <= 100; z++)
            {
                int m = x * x + y * y + z * z + x * y + y * z + z * x;
                if (m <= n)
                {
                    ans[m]++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    rep(i,n){
        cout << ans[i+1] << "\n";
    }
}