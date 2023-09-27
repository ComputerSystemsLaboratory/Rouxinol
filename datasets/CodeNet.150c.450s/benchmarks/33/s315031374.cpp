#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <complex>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <functional>
#include <bitset>
#include <tuple>

using namespace std;

typedef long long  ll;

int main()
{
    int x, y, s;

    while (cin >> x >> y >> s) {
        if (x == 0 && y == 0 && s == 0)
            break;

        int res = 0;
        for (int i = 1; i <= 1000; ++i) {
            for (int j = i; j <= 1000; ++j) {
                if ((i * (100 + x) / 100) + (j * (100 + x) / 100) == s) {
                    res = max(res, (i * (100 + y) / 100) + (j * (100 + y) / 100));
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}