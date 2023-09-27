#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int color = 0;
    vector<int> next;
} node[100000];

int main() {
    int n, m, q, t1, t2;

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> t1 >> t2;
        node[t1].next.push_back(t2);
        node[t2].next.push_back(t1);
    }

    int color = 1;
    queue<int> que;
    while (1) {
        int start = -1;
        for (int i = 0; i < n; i++) {
            if (node[i].color == 0) {
                start = i;
                break;
            }
        }
        if (start == -1) {
            break;
        }
        
        node[start].color = color;
        que.push(start);
        while (!que.empty()) {
            int temp = que.front();
            int size = node[temp].next.size();
            for (int i = 0; i < size; i++) {
                if (node[node[temp].next[i]].color == 0) {
                    node[node[temp].next[i]].color = color;
                    que.push(node[temp].next[i]);
                }
            }
            que.pop();
        }
        color++;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> t1 >> t2;
        if (node[t1].color == node[t2].color && node[t1].color > 0 && node[t2].color > 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}