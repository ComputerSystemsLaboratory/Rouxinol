#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <numeric>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <stack>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using edge = struct
{
    int to;
    int cost;
};

int N;
int d[50][50];

int main()
{
    while (cin >> N, N)
    {
        rep(i, 10) rep(j, 10) d[i][j] = iINF;
        rep(i, N)
        {
            int a, b, c;
            cin >> a >> b >> c;
            d[a][b] = c;
            d[b][a] = c;
        }

        rep(i, 10) d[i][i] = 0;

        rep(k, 10) rep(i, 10) rep(j, 10) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

        int ans = iINF, num;

        rep(i, 10)
        {
            int sum = 0;
            rep(j, 10)
            {
                if (d[i][j] == iINF)
                    break;
                sum += d[i][j];
            }

            if (sum < ans && sum != 0)
            {
                num = i;
                ans = sum;
            }
        }

        cout << num << " " << ans << endl;
    }
    return 0;
}
