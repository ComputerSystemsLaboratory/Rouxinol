#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <utility>
#include <iostream>
#include <functional>
#include <bitset>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <tuple>
#include <numeric>
#define rep(i, s, g) for ((i) = (s); (i) < (g); ++(i))
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = (1ll << 60);

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (auto &&i : a)
    {
        cin >> i;
    }

    ll score = 1;

    for (int i = k; i < n; i++)
    {
        if (a[i] > a[i - k])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
