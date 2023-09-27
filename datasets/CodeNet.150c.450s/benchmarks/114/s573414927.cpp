#include <iostream>
#include <vector>
#include <algorithm>

static int n;
static std::vector<std::vector<int>> link_mat;

enum STATUS {
    IN,
    OUT,
    EDGE,
};


void updateEdge(int node, std::vector<STATUS> &statuses) {
    statuses[node] = STATUS::IN;
    for (int i = 0; i < link_mat[node].size(); i++) {
        if (link_mat[node][i] == -1) {
            continue;
        }
        if (statuses[i] == STATUS::OUT) {
            statuses[i] = STATUS::EDGE;
        }
    }
}


int search(int node, std::vector<STATUS> &statuses) {
    updateEdge(node, statuses);
    int min = 2001;
    int min_node = -1;
    for (int i = 0; i < n; i++) {
        if (statuses[i] != STATUS::EDGE) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            int w = link_mat[i][j];
            if (w == -1 || w > min) {
                continue;
            }
            if (statuses[j] != STATUS::IN) {
                continue;
            }
            min = w;
            min_node = i;
        }
    }
    if (min_node == -1) {
        return 0;
    }
    return min + search(min_node, statuses);
}


int main() {
    std::cin >> n;
    link_mat = std::vector<std::vector<int>>(n, std::vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> link_mat[i][j];
        }
    }
    std::vector<STATUS> statuses(n, STATUS::OUT);
    int cost = search(0, statuses);
    
    std::cout << cost << std::endl;
}

