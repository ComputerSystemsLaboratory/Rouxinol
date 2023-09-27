#include <iostream>
#include <set>
#include <queue>

using namespace std;
using P = pair<int, int>;

const int MAX = 100;
const int NIL = -1;

int G[MAX][MAX];

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }

    set<int> T;
    int sum = 0;

    T.insert(0);

    while (T.size() < n) {
        priority_queue<P, vector<P>, greater<>> pq;
        for (int u : T) {
            for (int i = 0; i < n; i++) {
                if (G[u][i] != NIL && T.find(i) == T.end()) {
                    pq.push(make_pair(G[u][i], i));
                }
            }
        }
        T.insert(pq.top().second);
        sum += pq.top().first;
    }

    cout << sum << endl;
}
