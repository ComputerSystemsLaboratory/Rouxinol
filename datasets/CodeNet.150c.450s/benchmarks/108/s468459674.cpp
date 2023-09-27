#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

std::queue<std::pair<int, int>> q;
std::vector<std::vector<int>> vec;
std::vector<int> distances;
int n, id, num, d;

void bfs_search(int start_id) {
    q.push(std::make_pair(start_id, 0));
    while (!q.empty()) {
        auto x = q.front();
        q.pop();
        distances[x.first-1] = x.second;
        for (int i = 1; i <= n; i++) {
            if (vec[x.first][i] == 1 && distances[i-1] == -1) {
                q.push(std::make_pair(i, x.second+1));
                distances[i-1] = x.second;
            }
        }
    }
}

int main() {
    std::cin >> n;
    vec.assign(n+1, std::vector<int>(n+1, -1));
    for (int i = 0; i < n; ++i) {
        std::cin >> id >> num;
        for (int p = 0; p < num; p++) {
            std::cin >> d;
            vec[id][d] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        distances.push_back(-1);
    }
    bfs_search(1);
    for (int i = 0; i < n; i++) {
        std::cout << i+1 << " " << distances[i] << std::endl;
    }
}


