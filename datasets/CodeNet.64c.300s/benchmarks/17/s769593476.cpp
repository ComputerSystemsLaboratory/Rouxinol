//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1192&lang=jp
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using ll = long long;
using namespace std;

int const MOD = 1e9 + 7;

int main(void)
{
    int x, y, s;
    while (cin >> x >> y >> s, x)
    {
        int maxV = 0;
        for (int i = 1; i < s; ++i)
        {
            for (int j = 1; j < s; ++j)
            {
                if (i * (100 + x) / 100 + j * (100 + x) / 100 == s)
                {
                    maxV = max(maxV, i * (100 + y) / 100 + j * (100 + y) / 100);
                }
            }
        }
        cout << maxV << endl;
    }
    return 0;
}
