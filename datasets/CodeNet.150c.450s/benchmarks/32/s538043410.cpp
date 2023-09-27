#include <iostream>
using namespace std;

int main()
{
    int m, n_min, n_max;
    while (true)
    {

        cin >> m >> n_min >> n_max;
        if (m == 0 && n_min == 0 && n_max == 0)
            break;
        int p[m];

        for (int i = 0; i < m; i++)
        {
            cin >> p[i];
        }

        int gap = 0, ans;
        for (int j = n_min; j <= n_max; j++)
        {
            if (gap <= p[j - 1] - p[j])
            {
                gap = p[j - 1] - p[j];
                ans = j;
            }
        }

        cout << ans << endl;
    }
}

