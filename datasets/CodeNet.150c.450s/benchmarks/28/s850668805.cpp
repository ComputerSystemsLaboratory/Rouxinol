#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum(0);
    cin >> n >> k;
    int w[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> w[i];
        sum += w[i];
    }
    int ans = (sum % k == 0) ? sum / k : sum / k + 1;
    for (int i = 0; i < n; ++i)
    {
        if (w[i] > ans)
            ans = w[i];
    }
    int count, tmp;
    while (1)
    {
        count = 1;
        tmp = 0;
        for (int i = 0; i < n; ++i)
        {
            tmp += w[i];
            if (tmp > ans)
            {
                count++;
                tmp = w[i];
            }
        }
        if (count <= k)
            break;
        else
            ans++;
    }
    cout << ans << endl;
}
