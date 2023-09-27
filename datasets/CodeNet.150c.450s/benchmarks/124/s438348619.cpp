#include <iostream>
#include <vector>
#include <map>
#include <queue>


void update(int node, std::vector<int>& weight, const std::vector<std::map<int, int>> link_list) {
    for (auto && l : link_list[node]) {
        if (weight[l.first] == -1 || weight[node] + l.second < weight[l.first]) {
            weight[l.first] = weight[node] + l.second;
            update(l.first, weight, link_list);
        }
    }
}


int main() {
    int n;
    std::cin >> n;

    std::vector<std::map<int, int>> link_list;
    for (int i = 0; i < n; i++) {
        int u, k;
        std::cin >> u >> k;
        std::map<int, int> map;
        for (int j = 0; j < k; j++) {
            int c, v;
            std::cin >> c >> v;
            map[c] = v;
        }
        link_list.emplace_back(map);
    }

    std::vector<int> weight(n, -1);
    weight[0] = 0;

    auto comp = [] (std::tuple<int, int, int> &lfs, std::tuple<int, int, int> &rhs) {
        return std::get<2>(lfs) > std::get<2>(rhs);
    };
    
    std::priority_queue<std::tuple<int, int, int>, std::vector<std::tuple<int, int, int>>, decltype(comp)> que(comp);
    for (auto && m : link_list[0]) {
        que.push(std::make_tuple(0, m.first, m.second));
    }

    while (!que.empty()) {
        auto val = que.top();
        que.pop();
        auto w = weight[std::get<0>(val)] + std::get<2>(val);
        if (weight[std::get<1>(val)] == -1 || w < weight[std::get<1>(val)]) {
            weight[std::get<1>(val)] = w;
            for (auto && m : link_list[std::get<1>(val)]) {
                que.push(std::make_tuple(std::get<1>(val), m.first, m.second));
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << i << " " << weight[i] << std::endl;
    }
}


