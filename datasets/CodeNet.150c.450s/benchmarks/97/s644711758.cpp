#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000
#define MAXN 200

typedef long long ll;
typedef pair<int, int> P;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

P point[MAXN+1];

int main(void) {
    int N;
    while (1) {
        cin >> N;
        if (N == 0) break;
        int x_plus_max = 0, x_minus_max = 0, y_plus_max = 0, y_minus_max = 0;
        point[0].first = 0, point[0].second = 0;
        for (int i = 1; i < N; i++) {
            int n, d;
            cin >> n >> d;
            point[i].first = point[n].first + dx[d];
            point[i].second = point[n].second + dy[d];
            x_plus_max = max(x_plus_max, point[i].first);
            x_minus_max = max(x_minus_max, -point[i].first);
            y_plus_max = max(y_plus_max, point[i].second);
            y_minus_max = max(y_minus_max, -point[i].second);
        }
        int x = x_plus_max + 1 + x_minus_max;
        int y = y_plus_max + 1 + y_minus_max;
        cout << x << " " << y << endl;
    }
    return 0;
}