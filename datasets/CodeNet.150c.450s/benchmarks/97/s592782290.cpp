#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

static const int dy[] = { 0, 1, 0, -1 }, dx[] = { -1, 0, 1, 0 };

int main() {
        int n;
        while (scanf("%d", &n), n) {
                vector<pair<int, int>> p(n);
                p[0] = make_pair(0, 0);
                for (int i = 1; i < n; i ++) {
                        int a, d;
                        scanf("%d%d", &a, &d);
                        int y = p[a].first + dy[d];
                        int x = p[a].second + dx[d];
                        p[i] = make_pair(y, x);
                }
                int xma = -500, xmi = 500, yma = -500, ymi = 500;
                for (int i = 0; i < n; i ++) {
                        int y = p[i].first, x = p[i].second;
                        xma = max(xma, x);
                        xmi = min(xmi, x);
                        yma = max(yma, y);
                        ymi = min(ymi, y);
                }
                printf("%d %d\n", xma - xmi + 1, yma - ymi + 1);
        }
        return 0;
}