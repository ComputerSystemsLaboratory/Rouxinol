#include <iostream>
#include <queue>
#include <vector>


class Graph {
  public:
    Graph(int n) : n(n) {
        adj_arr = std::vector<std::vector<int>>(n);
        depth = std::vector<int>(n, -1);
    }

    void breadth_search(int i, int d) {
        std::queue<int> queue;
        depth[i] = d;
        
        for (auto && v : adj_arr[i]) {
            if (depth[v - 1] == -1 || depth[v - 1] > d) {
                queue.push(v - 1);
            }
        }

        while (!queue.empty()) {
            int v = queue.front();
            queue.pop();
            breadth_search(v, d + 1);
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << " " << depth[i] << std::endl;
        }
    }

  public:
    std::vector<std::vector<int>> adj_arr;
    std::vector<int> depth;
    
  private:
    int n;
};


int main () {
    int n;
    std::cin >> n;

    Graph graph(n);

    for (int i = 0; i < n; i++) {
        int u, k;
        std::cin >> u >> k;
        std::vector<int> arr(k);
        
        for (int j = 0; j < k; j++) {
            std::cin >> arr[j];
        }
        graph.adj_arr[u - 1] = arr;
    }

    graph.breadth_search(0, 0);
    graph.print();
}

