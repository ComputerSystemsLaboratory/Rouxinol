#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    bool visit = false;
    vector<int> next;
    int d = -1;
};

int main() {
    int n, id, k, temp;
    Node node[101];
    queue<int> que;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> k;
        for (int j = 0; j < k; j++) {
            cin >> temp;
            node[id].next.push_back(temp);
        }
    }

    node[1].d = 0;
    node[1].visit = true;
    que.push(1);
    while (!que.empty()) {
        temp = que.front();
        for (int i = 0; i < node[temp].next.size(); i++) {
            if (node[node[temp].next[i]].visit == false) {
                node[node[temp].next[i]].d = node[temp].d + 1;
                node[node[temp].next[i]].visit = true;
                que.push(node[temp].next[i]);
            }
        }
        que.pop();
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << node[i].d << endl;
    }
    
    return 0;
}