#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using i64 = long long;

auto get_base(std::vector<i64> v) {
    std::vector<i64> ret;
    const int n = v.size();
    int r = 0;
    for (i64 j = 0; j < 60; j++) {
        int p = -1;
        for (int i = r; i < n; i++) {
            if (v[i] & (1ll << j)) {
                p = i;
                break;
            }
        }

        if (p < 0) continue;
        std::swap(v[p], v[r]);
        ret.push_back(v[r]);

        for (int i = 0; i < n; i++) {
            if (i != r && (v[i] & (1ll << j))) v[i] ^= v[r];
        }
        r++;
    }

    return ret;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<i64> a(n);
        for (auto &e : a) std::cin >> e;
        std::string s;
        std::cin >> s;

        if (s.back() == '1') {
            std::cout << "1\n";
            continue;
        }

        std::vector<std::vector<i64>> v[2];
        for (int i = 0; i < n; ) {
            int j = i;
            const int t = s[i] - '0';
            while (j < n && s[j] == s[i]) j++;

            std::vector<i64> sub(a.begin() + i, a.begin() + j);
            v[t].push_back(get_base(sub));

            i = j;
        }

        std::vector<i64> bs;
        while (!v[1].empty()) {
            for (const i64 e : v[0].back()) bs.push_back(e);
            bs = get_base(bs);

            const int r = bs.size();
            for (const i64 e : v[1].back()) {
                bs.push_back(e);
                if (get_base(bs).size() != r) {
                    std::cout << "1\n";
                    goto next;
                }
                bs.pop_back();
            }

            v[0].pop_back();
            v[1].pop_back();
        }

        std::cout << "0\n";

next:;
    }

    return 0;
}
