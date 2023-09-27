#include <algorithm>
#include <functional>
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    while (true) {
        int a;
        int l;
        cin >> a >> l;
        if (a == 0 && l == 0) {
            break;
        }

        auto compute_next = [l](int n) {
            auto s = to_string(n);
            auto a0 = string(l - s.size(), '0') + s;
            auto min_ = a0;
            sort(begin(min_), end(min_));
            auto& max_ = a0;
            sort(begin(max_), end(max_), greater<>{});
            return stoi(max_) - stoi(min_);
        };
        unordered_map<int, int> m;
        m[a] = 0;
        for (int i = 1;; ++i) {
            auto n = compute_next(a);
            auto it = m.find(n);
            if (it != end(m)) {
                cout << it->second << ' ' << n << ' ' << (i - it->second)
                     << endl;
                break;
            }
            m[n] = i;
            a = n;
        }
    }
}