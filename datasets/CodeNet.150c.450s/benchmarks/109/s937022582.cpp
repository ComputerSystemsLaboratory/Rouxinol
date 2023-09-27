#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int ans = 0;
    while (n != 0)
    {
        vector<int> retime(360000);

        for (int i = 0; i < n; i++)
        {

            int h, m, s;
            int entime;
            int detime;

            scanf("%d:%d:%d", &h, &m, &s);
            retime[h * 60 * 60 + m * 60 + s]++;
            scanf("%d:%d:%d", &h, &m, &s);
            retime[h * 60 * 60 + m * 60 + s]--;
        }

        for (int i = 1; i < 360000; i++)
        {
            retime[i] += retime[i - 1];
        }

        ans = *max_element(retime.begin(), retime.end());

        cout << ans << endl;
        ans = 0;
        cin >> n;
    }
}
