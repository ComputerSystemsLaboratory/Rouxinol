#include <iostream>
#include <algorithm>

using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int N;

    while (cin >> N, N) {
        int y[202];
        int x[202];

        y[0] = x[0] = 0;
        for (int i = 1; i < N; i++) {
            int nx, ny, n, d;

            cin >> n >> d;
            x[i] = x[n] + dx[d];
            y[i] = y[n] + dy[d];
        }
        int min_x, min_y, max_x, max_y;

        min_x = min_y = max_x = max_y = 0;
        for (int i = 1; i < N; i++) {
            min_x = min(min_x, x[i]);
            min_y = min(min_y, y[i]);
            max_x = max(max_x, x[i]);
            max_y = max(max_y, y[i]);
        }
        
        cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
    }

    return 0;
}