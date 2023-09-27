#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

map<int, vector<int>> A;
int color[100001];

void assignColor(int u, int currentColor) {
    queue<int> Q;
    Q.push(u);
    color[u] = currentColor;
    int current;
    while(!Q.empty()) {
        current = Q.front();
        Q.pop();
        vector<int>::iterator it = A[current].begin();
        while(it != A[current].end()) {
            if (color[*it] == 0) {
                Q.push(*it);
                color[*it] = currentColor;
            }
            it++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int u1, u2;
    for (int i = 0; i < m; i++) {
        cin >> u1 >> u2;
        A[u1].push_back(u2);
        A[u2].push_back(u1);
    }

    for (int i = 0; i < n; i++) {
        color[i] = 0;
    }

    int c = 1;
    for (int i = 0; i < n; i++) {
        if (color[i] == 0) {
            assignColor(i, c);
            c++;
        }
    }

    int q, start, target;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> start >> target;

        if (color[start] == color[target]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}

