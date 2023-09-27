#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
#include <stack>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

constexpr int evx[4] = { 1, 0, -1, 0 };
constexpr int evy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

signed main()
{
    ios::sync_with_stdio(false);
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
                int tmp;
                cin >> tmp;
                a.push_back(tmp);
        }

        stack<pair<int,int>> mins;
        int now_min = INF * 2;
        int point = -1;
        for(int i = 0; i < n; ++i)
        {
                if(now_min > a[i])
                {
                        now_min = a[i];
                        point = i;
                        mins.push({now_min, point});
                }
        }
        int max_dif = -INF;
        mins.pop();
        for(int i = n-1; i >= 1; --i)
        {
                if(point >= i)
                {
                        now_min = mins.top().first;
                        point = mins.top().second;
                        mins.pop();
                }

                int dif = a[i] - now_min;

                max_dif = max_dif < dif ? dif : max_dif;
        }
        cout << max_dif << '\n';
}