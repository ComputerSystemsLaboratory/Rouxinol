#include <bits/stdc++.h>
using namespace std;

void solve(int D, vector<int> c, vector<vector<int>> s, vector<int> t)
{
    vector<int> last(26, -1);
    int res = 0;
    for (int d = 0; d < D; d++)
    {
        last.at(t.at(d)) = d;
        res += s.at(d).at(t.at(d));
        for (int i = 0; i < 26; i++)
        {
            if (i == t.at(d))
                continue;
            res -= c.at(i) * (d - last.at(i));
        }
        cout << res << endl;
    }
}

int main()
{
    int D;
    cin >> D;
    vector<int> c(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> c.at(i);
    }
    vector<vector<int>> s(D, vector<int>(26));
    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            cin >> s.at(i).at(j);
        }
    }
    vector<int> t(D);
    for (int i = 0; i < D; i++)
    {
        cin >> t.at(i);
        t.at(i)--;
    }
    solve(D, move(c), move(s), move(t));
    return 0;
}
