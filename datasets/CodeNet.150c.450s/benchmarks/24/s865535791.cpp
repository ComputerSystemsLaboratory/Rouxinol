#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

int search_xyz(int e);

int main()
{
    int num;
    int n, m;
    while (cin >> n >> m && n > 0)
    {
        pair<int, int> road[n];
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> road[i].second >> road[i].first;
            res += road[i].second * road[i].first;
        }
        sort(road, road + n);
        reverse(road, road + n);
        int point = 0;
        while (m > 0 && point < n)
        {
            if (m >= road[point].second)
            {
                res -= road[point].first * road[point].second;
                m -= road[point].second;
            }
            else
            {
                res -= road[point].first * m;
                m = 0;
            }
            point++;
        }
        cout << res << endl;
    }

    return 0;
}

