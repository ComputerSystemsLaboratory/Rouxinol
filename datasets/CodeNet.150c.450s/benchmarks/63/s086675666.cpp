#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INF (1 << 30)

struct Node {
    int id;
    vector<int> next_node;
    vector<int> next_cost;
    bool done;
    int cost;

    bool operator<(const Node& right) const {
        return cost > right.cost;
    }
} node[100000];

int main() {
    int v, e, r, s, t, d;

    cin >> v >> e >> r;
    for (int i = 0; i < v; i++) {
        node[i].id = i;
        node[i].done = false;
        node[i].cost = INF;
    }
    for (int i = 0; i < e; i++) {
        cin >> s >> t >> d;
        node[s].next_node.push_back(t);
        node[s].next_cost.push_back(d);
    }

    Node temp;
    int size, to, cost;
    priority_queue<Node> que;
    node[r].cost = 0;
    que.push(node[r]);
    while (!que.empty()) {
        temp = que.top();
        que.pop();

        if (temp.done == true) {
            continue;
        }
        node[temp.id].done = true;

        size = temp.next_node.size();
        for (int i = 0; i < size; i++) {
            to = temp.next_node[i];
            cost = temp.cost + temp.next_cost[i];
            if (cost < node[to].cost) {
                node[to].cost = cost;
                que.push(node[to]);
            }
        }
    }

    for (int i = 0; i < v; i++) {
        if (node[i].done == false) {
            cout << "INF\n";
        }
        else {
            cout << node[i].cost << endl;
        }
    }
    
    return 0;
}