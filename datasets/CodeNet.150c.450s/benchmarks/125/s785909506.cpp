#include <iostream>
#include <vector>


class Graph {
public:
    std::vector<int> d, v;
    std::vector<std::vector<int>> arr;
    int n;
    int tp = 1;

    Graph(int n) : n(n) {
        d = std::vector<int>(n, 0);
        v = std::vector<int>(n, 0);
        arr = std::vector<std::vector<int>>(n);
    }
    
    void depth_search(int i) {
        if (d[i] == 0) {
            d[i] = tp;
            tp++;
            for (auto j : arr[i]) {
                depth_search(j - 1);
            }
            v[i] = tp;
            tp++;
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << " " << d[i] << " " << v[i] << std::endl;
        }
    }
};


int main() {
    int n;
    std::cin >> n;

    Graph graph(n);
    
    for (int i = 0; i < n; i++) {
        int u, k;
        std::cin >> u >> k;
        std::vector<int> vs(k);
        
        for (int i = 0; i < k; i++) {
            std::cin >> vs[i];
        }
        graph.arr[u - 1] = vs;
    }

    for (int i = 0; i < n; i++) {
        graph.depth_search(i);
    }

    graph.print();

}

