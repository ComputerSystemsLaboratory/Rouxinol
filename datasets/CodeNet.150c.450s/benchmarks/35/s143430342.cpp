#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

int main()
{
    int n;
    while (cin >> n, n)
    {
        vector<long long int> data;
        data.push_back(0);
        rep(i, n)
        {
            long long int temp;
            cin >> temp;
            data.push_back(data[i] + temp);
        }
        long long int ans = INT_MAX*-1;
        rep(i, n + 1)
        {
            REP(j, i + 1, n + 1)
            {
                ans = max(ans, data[j] - data[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}