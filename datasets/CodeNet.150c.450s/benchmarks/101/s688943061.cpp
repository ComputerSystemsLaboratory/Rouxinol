#include <cstring>
#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    int link[n];
    std::vector<std::vector<int>> list;
    for (int i = 0; i < n; i++) {
        link[i] = -1;
    }

    int cnt = 0;
    int s, t;
    for (int i = 0; i < m; i++) {
        std::cin >> s >> t;
        if (link[s] == -1 && link[t] == -1) {
            link[s] = link[t] = cnt;
            cnt++;
            list.emplace_back(std::vector<int>({s, t}));
        } else if (link[s] == -1) {
            link[s] = link[t];
            list[link[t]].emplace_back(s);
        } else if (link[t] == -1) {
            link[t] = link[s];
            list[link[s]].emplace_back(t);
        } else if (link[s] < link[t]) {
            list[link[s]].insert(list[link[s]].end(), list[link[t]].begin(), list[link[t]].end());
            for (auto val : list[link[t]]) {
                link[val] = link[s];
            }
        } else if (link[t] < link[s]) {
            list[link[t]].insert(list[link[t]].end(), list[link[s]].begin(), list[link[s]].end());
            for (auto val : list[link[s]]) {
                link[val] = link[t];
            }
        }
    }

    int q;
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> s >> t;
        if (link[s] == link[t] && link[s] != -1) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
}

