#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#define rep(i, cc, n) for (int i = cc; i < n; ++i)
using namespace std;
using ll = long long;

int main()
{
    int D;
    cin >> D;

    vector<int> C(26);
    vector<int> satis(26, 0);
    vector<int> conts(26, 0);
    rep(i, 0, 26)
    {
        int c;
        cin >> c;

        C[i] = c;
    }

    vector<vector<int>> S(D, vector<int>(26));
    rep(i, 0, D)
    {
        rep(j, 0, 26)
        {
            int s;
            cin >> s;
            S.at(i).at(j) = s;
        }
    }

    rep(d, 1, D + 1)
    {
        int t;
        cin >> t;
        t--;

        rep(j, 0, 26)
        {
            if (j == t)
            {
                satis[j] += S.at(d - 1).at(j);
                conts[j] = d;
            }
            else
            {
                satis[j] -= C[j] * (d - conts[j]);
            }
        }

        int ans = 0;
        rep(j, 0, 26)
        {
            ans += satis[j];
        }

        cout << ans << endl;
    }
}
