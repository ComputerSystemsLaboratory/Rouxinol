#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef vector<vector<int> > VII;
typedef pair<int, int> PII;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void bfs (int i, int j, VII &table) {
    queue<PII> que;
    que.push(make_pair(i, j));
    table[i][j] = 0;
    while (1) {
        if (que.empty() == 1) {
            break; 
        }
        int now_y = que.front().first;
        int now_x = que.front().second;
        que.pop();

        for (int k = 0; k < 8; k++) {
            if (table[now_y + dy[k]][now_x + dx[k]] == 1) {
                que.push(make_pair(now_y + dy[k], now_x + dx[k]));
                    table[now_y + dy[k]][now_x + dx[k]] = 0;
            }
        }
    }
    return;
}

int main(void) {
    int w;
    int h;
    while (cin >> w >> h) {
        if (w == 0 && h == 0) {
            break;
        }
        VII table(h + 2, vector<int>(w + 2, 0));
        for (int i = 1; i < h + 1; i++) {
            for (int j = 1; j < w + 1; j++) {
                cin >> table[i][j];
            }
        }
        int number = 0;
        for (int i = 1; i < h + 1; i++) {
            for (int j = 1; j < w + 1; j++) {
                if (table[i][j] == 1) {
                    bfs(i, j, table);
                    number++;
                }
            }
        }
        cout << number << endl;
    }
    return 0;
}