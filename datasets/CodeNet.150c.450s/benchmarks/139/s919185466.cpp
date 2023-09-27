#include <vector>
#include <queue>
#include <utility>
#include <iostream>
#include <tuple>

using ll = long long;
using lli = long long int;

lli n, m, a, b, src_num;
std::queue<std::vector<lli>> q;;
std::vector<std::vector<lli>> vec;
std::vector<std::vector<lli>> visited;

int main() {
    std::cin >> n >> m;
    visited.assign(n+1, std::vector<lli>(3, -1));
    vec.assign(n+1, std::vector<lli>(0, 0));
    for (lli i = 0; i < m; i++) {
        std::cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    q.push({1, 0, 0});
    while (!q.empty()) {
        auto pa = q.front();
        int vec_index = pa[0];
        if (visited[vec_index][0] == -1) {
            visited[vec_index] = pa;
        }
        else {
            q.pop();
            continue;
        }
        for (int i = 0; i <vec[vec_index].size(); i++) {
            if (visited[vec[vec_index][i]][0] == -1) {
                q.push({vec[vec_index][i], visited[vec_index][1]+1, vec_index});
            }
        }
        q.pop();
    }
    std::cout << "Yes" << std::endl;
    for (int i = 2; i < visited.size(); i++) {
        //std::cout << "{" << visited[i][0] << "," << visited[i][1] << "," << visited[i][2] << "}" << std::endl;
        std::cout << visited[i][2] << std::endl;
    }
}
