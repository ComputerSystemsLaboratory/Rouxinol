#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

int main()
{
    int h, w;
    vector<pair<pii, int>> vec;
    for (int i = 1; i <= 200; i++)
    {
        for (int j = i + 1; j <= 200; j++)
        {
            vec.push_back(make_pair(make_pair(i * i + j * j, i), j));
        }
    }

    sort(vec.begin(), vec.end());
    while (cin >> h >> w, h | w)
    {
        int len = h * h + w * w;
        for (int i = 0; i < vec.size(); i++)
        {
            if (len == vec[i].first.first && h == vec[i].first.second && w == vec[i].second)
            {
                cout << vec[i + 1].first.second << ' ' << vec[i + 1].second << endl;
                break;
            }
        }
    }
}
