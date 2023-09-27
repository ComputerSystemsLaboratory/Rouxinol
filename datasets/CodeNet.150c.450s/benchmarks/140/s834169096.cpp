#include <iostream>
#include <vector>
#include <queue>


int main() {
    int V, E;
    std::cin >> V >> E;


    std::vector<std::vector<std::pair<int, int>>> link_list(V);

    for (int i = 0; i < E; i++) {
        int s, t, w;
        std::cin >> s >> t >> w;
        link_list[s].emplace_back(std::make_pair(t, w));
        link_list[t].emplace_back(std::make_pair(s, w));
    }

    std::vector<int> color(V, 0);

    auto compare = [] (std::pair<int, int> lhs, std::pair<int, int> rhs) {
        return lhs.second > rhs.second;
    };

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(compare)> que {compare};
    for (auto & next : link_list[0]) {
        que.push(next);
    }
    color[0] = 1;
    int sum = 0;
    while (!que.empty()) {
        auto link = que.top();
        que.pop();
        if (color[link.first] != 0) {
            continue;
        }

        color[link.first] = 1;
        sum += link.second;

        for (auto & next : link_list[link.first]) {
            if (color[next.first] == 0) {
                que.push(next);
            }
        }
    }
    std::cout << sum << std::endl;
}

