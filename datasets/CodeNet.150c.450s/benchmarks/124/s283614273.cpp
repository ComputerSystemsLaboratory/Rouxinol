#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

struct Node {
    int cost = INT_MAX;
    int color = 0;
    vector<int> next_node;
    vector<int> len_cost;
} node[100];

int main() {
    int n, id, k;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> k;
        node[id].next_node.resize(k);
        node[id].len_cost.resize(k);
        for (int j = 0; j < k; j++) {
            cin >> node[id].next_node[j] >> node[id].len_cost[j];
        }
    }

    int size1, size2;
    vector<int> vec;
    node[0].cost = 0;
    node[0].color = 1;
    vec.push_back(0);
    while (1) {
        size1 = vec.size();
        if (size1 == n) {
            break;
        }
        for (int i = 0; i < size1; i++) {
            size2 = node[vec[i]].next_node.size();
            for (int j = 0; j < size2; j++) {
                if (node[node[vec[i]].next_node[j]].cost > node[vec[i]].cost + node[vec[i]].len_cost[j]) {
                    node[node[vec[i]].next_node[j]].cost = node[vec[i]].cost + node[vec[i]].len_cost[j];
                }
            }
        }
        int min = INT_MAX, mini;
        for (int i = 0; i < size1; i++) {
            size2 = node[vec[i]].next_node.size();
            for (int j = 0; j < size2; j++) {
                if (min > node[node[vec[i]].next_node[j]].cost && node[node[vec[i]].next_node[j]].color == 0) {
                    min = node[node[vec[i]].next_node[j]].cost;
                    mini = node[vec[i]].next_node[j];
                }
            }
        }
        vec.push_back(mini);
        node[mini].color = 1;
    }

    for (int i = 0; i < n; i++) {
        cout << i << " " << node[i].cost << endl;
    }
    
    return 0;
}