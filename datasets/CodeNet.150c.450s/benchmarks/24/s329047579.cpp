#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>
#include <iomanip>
#include <numeric>
#include <queue>
#include <climits>
#include <set>
#include <complex>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
#define MOD 1000000007
#define INF 1LL << 59
using ld = long double;

bool operator<(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //cout << fixed << setprecision(5);

    int N, M;
    while (cin >> N >> M, N || M)
    {
        vector<pair<int, int>> vp;
        for (int i = 0; i < N; ++i)
        {
            int D, P;
            cin >> D >> P;
            vp.push_back({P, D});
        }

        sort(vp.begin(), vp.end());
        reverse(vp.begin(), vp.end());

        ll ans = 0;
        for (int i = 0; i < N; ++i)
        {

            if (M == 0)
            {
                ans += vp[i].second * vp[i].first;
                continue;
            }
            if (M >= vp[i].second)
            {
                M -= vp[i].second;
            }
            else if (M - vp[i].second < 0)
            {
                ans += (vp[i].second - M) * vp[i].first;
                M = 0;
            }
            //cout << vp[i].first << " " << vp[i].second << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
