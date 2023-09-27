#include <iostream>
#include <iterator>
#include <numeric>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n;
        int m;
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        vector<int> sn;
        for (int i = 0; i < n; ++i) {
            int s;
            cin >> s;
            sn.push_back(s);
        }
        vector<int> sm;
        for (int i = 0; i < m; ++i) {
            int s;
            cin >> s;
            sm.push_back(s);
        }
        constexpr auto MAX_VALUE = 999999999;
        auto changeMin = make_tuple(0, 0, MAX_VALUE);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                auto a = sn;
                auto b = sm;
                swap(a[i], b[j]);
                auto sa = accumulate(begin(a), end(a), 0);
                auto sb = accumulate(begin(b), end(b), 0);
                if (sa == sb) {
                    auto sv = a[i] + b[j];
                    if (sv < get<2>(changeMin)) {
                        changeMin = make_tuple(b[j], a[i], sv);
                    }
                }
            }
        }
        if (get<2>(changeMin) == MAX_VALUE) {
            cout << -1 << endl;
        }
        else {
            int i;
            int j;
            tie(i, j, ignore) = changeMin;
            cout << i << ' ' << j << endl;
        }
    }
}