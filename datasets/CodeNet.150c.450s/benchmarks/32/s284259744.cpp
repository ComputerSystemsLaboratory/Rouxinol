#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int m, n_min, n_max;
    vector<int> x;
    while (1)
    {
        cin >> m >> n_min >> n_max;
        if (m == 0)
        {
            break;
        }
        int sum = 0;
        int total = 0;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        int difference = 0;
        // 平均をずらしていく
        for (int i = n_min-1; i < n_max; i++)
        {
            int tmp_diff = abs(a[i] - a[i+1]);
            // cout << a[i]  << a[i+1] << endl;
            if (tmp_diff >= difference)
            {
                difference = tmp_diff;
                cnt = i + 1;
            }
        }
        x.push_back(cnt);
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
}

