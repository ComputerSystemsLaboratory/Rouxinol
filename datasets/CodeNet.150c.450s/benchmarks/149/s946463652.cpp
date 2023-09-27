#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> rank;

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        rank.push_back(i);
    }

    for (int i = 0; i < q; i++) {
        int c;
        int x, y;

        cin >> c >> x >> y;
        if (c == 0) {
            int a = rank[x];
            int b = rank[y];

            if (a == b) {
                continue;
            }
            for (int j = 0; j < n; j++) {
                if (rank[j] == b)
                    rank[j] = a;
            }
        } else {
            if (rank[x] == rank[y]) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}