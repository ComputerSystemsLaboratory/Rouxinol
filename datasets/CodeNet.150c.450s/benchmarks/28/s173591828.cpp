#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int w;
        cin >> w;
        v.push_back(w);
    }

    auto sum_ = accumulate(begin(v), end(v), 0);
    auto max_ =
        accumulate(begin(v), end(v), 0, [](int z, int c) { return max(z, c); });

    int l{max_};
    int r{sum_};
    int m{0};
    auto check = [&v, k](int p) {
        int count{1};
        int payload{0};
        for (auto&& i : v) {
            payload += i;
            if (payload > p) {
                count += 1;
                payload = i;
                if (count > k) {
                    return false;
                }
            }
        }
        return true;
    };
    while (l < r) {
        m = l + (r - l) / 2;
        if (check(m)) {
            r = m;
        }
        else {
            l = m + 1;
        }
    }
    cout << r << endl;
}