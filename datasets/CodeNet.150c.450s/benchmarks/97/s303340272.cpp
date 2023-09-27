#include <bits/stdc++.h>

using namespace std;

struct square {
    int x, y;
};

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main() {

    int N;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};

    while(cin >> N, N) {

        int n, d;
        int min_x, min_y;
        int max_x, max_y;
        square s[N];

        min_x = min_y = 0;
        max_x = max_y = 0;
        s[0].x = s[0].y = 0;

        for(int i = 1; i < N; ++i) {
            cin >> n >> d;
            s[i].x = s[n].x + dx[d];
            s[i].y = s[n].y + dy[d];
            min_x = min(min_x, s[i].x);
            min_y = min(min_y, s[i].y);
            max_x = max(max_x, s[i].x);
            max_y = max(max_y, s[i].y);
        }

        cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;

    }

}