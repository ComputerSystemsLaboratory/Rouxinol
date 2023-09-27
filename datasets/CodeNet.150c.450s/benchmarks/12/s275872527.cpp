#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

void print(int id, std::vector<int> tree) {
    std::cout << "node " << id << ": key = " << tree[id-1] << ", ";
    if (id/2 > 0) {
        std::cout << "parent key = " << tree[id/2-1] << ", ";
    }
    if (2*id <= tree.size()) {
        std::cout << "left key = " << tree[2*id-1] << ", ";
    }
    if (2*id+1 <= tree.size()) {
        std::cout << "right key = " << tree[2*id] << ", ";
    }
    std::cout << "\n";
}

int main() {
    int n, h;
    std::cin >> n;
    std::vector<int> tree;
    for (int i=0; i<n; i++) {
        std::cin >> h;
        tree.push_back(h);
    }

    for (int i=1; i<=n; i++) {
        print(i, tree);
    }

    return 0;
}
