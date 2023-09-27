#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    int N;
    while (cin >> N, N) {
        vector<int> x, y;
        x.push_back(0);
        y.push_back(0);
        
        for (int i = 1; i < N; i++) {
            int n, d;
            cin >> n >> d;

            x.push_back(x[n] + dx[d]);
            y.push_back(y[n] + dy[d]);
        }

        const int inf = 1 << 30;
        int xmin = inf, ymin = inf;
        int xmax = -inf, ymax = -inf;

        for (int i = 0; i < N; i++) {
            xmin = min(x[i], xmin);
            ymin = min(y[i], ymin);
            xmax = max(x[i], xmax);
            ymax = max(y[i], ymax);
        }

        cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
    }
    
    return 0;
}