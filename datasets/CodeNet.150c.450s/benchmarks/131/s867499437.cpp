//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1180
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using ll = long long;
using namespace std;

int const MOD = 1e9 + 7;

int main(void)
{
    int n, L;

    while (cin >> n >> L, n || L)
    {
        int ans = 0;
        int t = n;
        map<int, int> mp;
        vector<vector<int>> memo(1e6);
        if (memo[t].size() == 2)
            break;

        memo[t].push_back(ans);

        while (1)
        {
            vector<int> v;

            while (t)
            {
                v.push_back(t % 10);
                t /= 10;
            }
            while (1)
            {
                if ((int)v.size() == L)
                    break;
                v.push_back(0);
            }

            int minV = 0, maxV = 0;
            sort(v.begin(), v.end());

            t = 1;

            for (int i = 0; i < L; ++i)
            {
                maxV += t * v[i];
                t *= 10;
            }
            t = 1;
            for (int i = L - 1; i >= 0; --i)
            {
                minV += t * v[i];
                t *= 10;
            }
            t = maxV - minV;
            ans++;
            if (memo[t].size() == 2)
                break;

            memo[t].push_back(ans);
        }
        cout << memo[t][0] << " " << t << " " << memo[t][1] - memo[t][0] << endl;
    }
    return 0;
}
