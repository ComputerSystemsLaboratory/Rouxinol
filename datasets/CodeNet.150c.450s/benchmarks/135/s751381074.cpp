#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    while(cin >> n >> m, n | m)
    {
        int h[n + 1], w[m + 1];
        for(int i = 0; i < n; i++) cin >> h[i];
        for(int i = 0; i < m; i++) cin >> w[i];
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int sum = h[i];
            mp[sum]++;
            for(int j = i + 1; j < n; j++)
            {
                sum += h[j];
                mp[sum]++;
            }
        }
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            int sum = w[i];
            ans += mp[sum];
            for(int j = i + 1; j < m; j++)
            {
                sum += w[j];
                ans += mp[sum];
            }
        }
        cout << ans << endl;
    }
    return 0;
}


