#include <cstdio>
#include <map>
#include <queue>

using namespace std;

int h, w, n;

char field[1010][1010];

using pos = pair<int, int>;

pos pass[10];

int distance(pos start, pos goal) {
    bool visited[1010][1010];
    for (int i = 0; i < 1010; i++) {
        for (int j = 0; j < 1010; j++) {
            visited[i][j] = false;
        }
    }
    queue<pair<int, pos>> q;
    q.push(make_pair(0, start));

    while (!q.empty()) {
        auto s = q.front();
        q.pop();
        if (s.second.first < 0 || s.second.second < 0 || s.second.first >= h || s.second.second >= w) { continue; }
        if (field[s.second.first][s.second.second] == 'X') { continue; }
        if (visited[s.second.first][s.second.second]) { continue; }
        if (s.second == goal) {
            return s.first;
        }
        visited[s.second.first][s.second.second] = true;
        q.push(make_pair(s.first + 1, make_pair(s.second.first, s.second.second + 1)));
        q.push(make_pair(s.first + 1, make_pair(s.second.first, s.second.second - 1)));
        q.push(make_pair(s.first + 1, make_pair(s.second.first + 1, s.second.second)));
        q.push(make_pair(s.first + 1, make_pair(s.second.first - 1, s.second.second)));
    }
}

int main() {
    scanf("%d", &h);
    scanf("%d", &w);
    scanf("%d", &n);
    for (int i = 0; i < h; i++) {
        scanf("%s", field[i]);
        for (int j = 0; j < w; j++) {
            if (field[i][j] == 'S') {
                pass[0] = make_pair(i, j);
            } else if (field[i][j] >= '1' && field[i][j] <= '9') {
                pass[field[i][j] - '0'] = make_pair(i, j);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += distance(pass[i], pass[i + 1]);
    }
    printf("%d\n", sum);
}