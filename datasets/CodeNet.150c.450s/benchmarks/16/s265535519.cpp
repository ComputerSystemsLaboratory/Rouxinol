#include <iostream>
#include <stack>
#include <utility>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::vector< int > ans;
    std::stack< std::pair< int, int > > st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '_') continue;

        if (s[i] == '/') {
            if (st.empty()) {
                continue;
            }

            std::vector< std::pair< int, int > > vs;
            while (!st.empty() && st.top().second != 0) {
                vs.emplace_back(st.top());
                st.pop();
            }

            if (st.empty()) {
                std::reverse(vs.begin(), vs.end());
                for (auto &v: vs) ans.emplace_back(v.second);
            } else {
                int sum = i - st.top().first;;
                for (auto &v: vs) sum += v.second;
                st.pop();
                st.emplace(i, sum);
            }
        } else {
            st.emplace(i, 0);
        }
    }

    std::vector< int > vs;
    while (!st.empty()) {
        if (st.top().second != 0) {
            vs.emplace_back(st.top().second);
        }

        st.pop();
    }

    std::reverse(vs.begin(), vs.end());
    for (auto &v: vs) ans.emplace_back(v);

    std::cout << std::accumulate(ans.begin(), ans.end(), 0) << std::endl;

    std::cout << ans.size();
    for (auto a: ans) std::cout << " " << a;
    std::cout << std::endl;
}

