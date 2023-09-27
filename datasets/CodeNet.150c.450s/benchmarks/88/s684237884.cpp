//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1186
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
    int h, w;
    while (cin >> h >> w, h || w)
    {
        pair<int, int> ans(150, 150); //高さ 幅
        for (int i = 1; i < 150; ++i) // w
        {
            for (int j = 1; j < 150; ++j) // h
            {
                if (i <= j)
                    break;
                if (h * h + w * w < i * i + j * j)
                {
                    if ((i * i + j * j) < (ans.first * ans.first + ans.second * ans.second))
                    {
                        ans.first = j;
                        ans.second = i;
                    }
                    else if ((i * i + j * j) == (ans.first * ans.first + ans.second * ans.second))
                    {
                        if (j < ans.first)
                        {
                            ans.first = j;
                            ans.second = i;
                        }
                    }
                }
                if (h * h + w * w == i * i + j * j)
                {
                    if (i * i + j * j == (ans.first * ans.first + ans.second * ans.second))
                    {
                        if (h < j && ans.first > j)
                        {
                            ans.first = j;
                            ans.second = i;
                        }
                    }
                    else
                    {
                        if (h < j)
                        {
                            ans.first = j;
                            ans.second = i;
                        }
                    }
                }
            }
        }
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}
