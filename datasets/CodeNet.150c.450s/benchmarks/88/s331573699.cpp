#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

int h, w;

int main()
{
    //h, w w > h
    vector<pair<int, pair<int, int>>> v;
    for (int h = 1; h < 200; h++)
    {
        for (int w = h + 1; w < 200; w++)
        {
            v.push_back({h * h + w * w, {h, w}});
        }
    }
    sort(v.begin(), v.end());

    while (cin >> h >> w)
    {
        if (w == 0 && w == 0)
            return 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (h * h + w * w < v[i].first || (h * h + w * w == v[i].first && h < v[i].second.first))
            {
                cout << v[i].second.first << " " << v[i].second.second << endl;
                break;
            }
        }
    }
}
