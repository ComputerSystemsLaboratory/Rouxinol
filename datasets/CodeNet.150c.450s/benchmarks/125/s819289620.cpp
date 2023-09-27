#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

int n;
int time_count = 0;
std::vector<std::pair<int, int>> times;
std::vector<std::vector<int>> vec;

void dfs(int id) {
    if (times[id-1].first == -1) {
        times[id-1].first = ++time_count; 
        for (int i = 1; i <= n; i++) {
            if (vec[id][i] == 1 && times[i-1].first == -1) {
                dfs(i);
            }
        }
        times[id-1].second = ++time_count;
    }
}

int main() {
    std::cin >> n;
    vec.assign(n+1, std::vector<int>(n+1, 0));
    for (int i = 0; i < n; i++) {
        times.push_back(std::make_pair(-1, -1));
    }
    for (int i = 0; i < n; i++) {
        int id, num, d;
        std::cin >> id >> num;
        for (int p = 0; p < num; p++) {
            std::cin >> d;
            vec[id][d] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        dfs(i);
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << i+1 << " " << times[i].first << " " << times[i].second << std::endl;
    }
}


