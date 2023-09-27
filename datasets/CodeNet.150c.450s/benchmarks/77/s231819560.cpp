#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            return 0;
        }

        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            v.emplace_back(x, y);
        }

        pair<int, int> pos(10, 10);
        int m;
        cin >> m;
        v.erase(remove(begin(v), end(v), pos), end(v));
        for (int i = 0; i < m; ++i) {
            char d;
            int x;
            cin >> d >> x;
            for (int j = x; j > 0; --j) {
                if (d == 'N' || d == 'S') {
                    int dy = d == 'N' ? 1 : -1;
                    pos.second += dy;
                }
                else {
                    int dx = d == 'E' ? 1 : -1;
                    pos.first += dx;
                }
                v.erase(remove(begin(v), end(v), pos), end(v));
            }
        }

        if (v.empty()) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}