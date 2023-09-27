#include <algorithm>
#include <cstdio>
#include <numeric>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    char ss[20010];
    scanf("%s", ss);
    const string s = ss;
    auto f = [&s](int start) {
        vector<pair<char, int>> st;
        vector<int> v;
        int depth = 0;
        int current = 0;
        for (size_t i = start; i < s.size(); ++i) {
            switch (s[i]) {
            case '\\':
                current += depth * 2 + 1;
                depth += 1;
                st.push_back(make_pair(s[i], i));
                break;
            case '_':
                current += depth * 2;
                break;
            case '/':
                depth -= 1;
                current += depth * 2 + 1;
                if (st.empty()) {
                    depth = 0;
                    current = 0;
                }
                else {
                    st.pop_back();
                    if (st.empty()) {
                        v.push_back(current / 2);
                        depth = 0;
                        current = 0;
                    }
                }
                break;
            }
            // printf("stacksize: %ld, depth: %d, current: %d\n", st.size(),
            // depth,
            //       current);
        }
        if (st.empty()) {
            return make_pair(v, -2);
        }
        else {
            return make_pair(v, st[0].second);
        }
    };
    vector<int> v;
    int start = 0;
    do {
        auto r = f(start);
        v.insert(end(v), begin(r.first), end(r.first));
        start = r.second + 1;
        if (accumulate(begin(s) + start, end(s), true,
                       [](bool lhs, char rhs) { return lhs && rhs == '\\'; })) {
            // There is no valid area.
            break;
        }
    } while (start != -1);
    //    for (auto&& i : st) {
    //        printf("%c %d ", i.first, i.second);
    //    }
    // putchar('\n');
    // putchar('\n');
    printf("%d\n", accumulate(begin(v), end(v), 0));
    if (v.size() == 0) {
        printf("%ld\n", v.size());
    }
    else {
        printf("%ld ", v.size());
    }
    for (size_t i = 0; i < v.size(); ++i) {
        if (i != v.size() - 1) {
            printf("%d ", v[i]);
        }
        else {
            printf("%d\n", v[i]);
        }
    }
}