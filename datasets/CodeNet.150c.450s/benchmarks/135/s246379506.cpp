//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167
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

#define MAX 1000000
int const MOD = 1e9 + 7;
int main(void)
{
    int N, M;
    while (cin >> N >> M, N || M)
    {
        vector<int> h(N), w(M);
        for (int i = 0; i < N; ++i)
            cin >> h[i];
        for (int i = 0; i < M; ++i)
            cin >> w[i];

        int sh[1510] = {0}, sw[1510] = {0};
        for (int i = 0; i < N; ++i)
        {
            sh[i + 1] = sh[i] + h[i];
        }
        for (int i = 0; i < M; ++i)
        {
            sw[i + 1] = sw[i] + w[i];
        }
        map<ll, int> nh, nw;
        for (int i = 0; i < N + 1; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                nh[sh[i] - sh[j]]++;
            }
        }
        for (int i = 0; i < M + 1; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                nw[sw[i] - sw[j]]++;
            }
        }
        ll sum = 0;
        for (auto itr = nh.begin(); itr != nh.end(); ++itr)
        {
            sum += (*itr).second * nw[(*itr).first];
        }
        cout << sum << endl;
    }
    return 0;
}
