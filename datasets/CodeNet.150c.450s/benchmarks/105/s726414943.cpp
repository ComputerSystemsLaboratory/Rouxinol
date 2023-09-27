#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cstring>
#include <functional>
#include <iostream>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <array>
#include <complex>

#define endl '\n'

using namespace std;

const int BITS = 60;

void solve()
{
    int n;
    cin >> n;

    vector<long long> A(n);

    for (int i = 0; i < n; ++i)
        cin >> A[i];

    string s;
    cin >> s;

    reverse(A.begin(), A.end());
    reverse(s.begin(), s.end());

    vector<long long> gauss(BITS);

    auto add = [&](long long cur) {
        for (int i = BITS - 1; i >= 0; --i)
        {
            if (cur >> i & 1)
            {
                if (gauss[i] == 0)
                {
                    gauss[i] = cur;
                    return true;
                }
                else
                {
                    cur ^= gauss[i];
                }
            }
        }

        return false;
    };

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            add(A[i]);
        }
        else
        {
            if (add(A[i]))
            {
                cout << 1 << endl;
                return;
            }
        }
    }

    cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
