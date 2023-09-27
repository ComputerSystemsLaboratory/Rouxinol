#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int,int> P;

const int dx[] = { 0, 1, 0,-1, 1, 1,-1,-1};
const int dy[] = { 1, 0,-1, 0, 1,-1, 1,-1};
int h, w;
vector<vector<int> > islands(50, vector<int>(50));

void bfs (int i, int j) {
    queue<P> q;
    q.push(P(i,j));
    while (q.size()) {
        const P p = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int x = p.first + dx[i], y = p.second + dy[i];
            if (0 <= x && x < w && 0 <= y && y < h && islands[x][y]) {
                islands[x][y] = 0;
                q.push(P(x,y));
            }
        }
    }
}

int main ()
{
    while (cin >> h >> w, (h || w)) {
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                cin >> islands[i][j];
            }
        }

        int count = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (islands[i][j] == 1) {
                    count++;
                    islands[i][j] = 0;
                    bfs(i, j);
                }
            }
        }
        cout << count << endl;
    }


    return 0;
}