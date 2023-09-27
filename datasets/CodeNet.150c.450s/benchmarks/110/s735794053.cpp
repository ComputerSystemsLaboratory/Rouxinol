#include <cstdio>
#include <cstring>
#include <queue>
#include <cctype>

using namespace std;

struct State {
    int step;
    int x;
    int y;

    State() {
        step = 0;
        x = 0;
        y = 0;
    }

    State(int step, int x, int y): step(step), x(x), y(y) {}
};

const int MAX_N = 1000;
const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
char board[MAX_N][MAX_N];
int W, H, N;
State pos[10];

void init();
void input();
void solve();
int bfs(State from, State to);
void findPossition();

int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    init();
    input();
    solve();
    return 0;
}

void init() {
}

void input() {
    scanf("%d %d %d", &H, &W, &N);

    for(int i = 0; i < H; i++) {
        scanf("%s", board[i]);
    }
}


void solve() {
    int moves = 0;
    findPossition();

    for(int i = 0; i < N; i++) {
        moves += bfs(pos[i], pos[i + 1]);
    }

    printf("%d\n", moves);
}

int bfs(State from, State to) {
    queue<State> que;
    bool visit[H][W];
    State cur = from;

    for(int i = 0; i < H; i++) {
        memset(visit[i], false, sizeof(visit[i]));
    }

    que.push(cur);

    while(!que.empty()) {
        cur = que.front();
        que.pop();

        if(visit[cur.x][cur.y]) {
            continue;
        }
        
        visit[cur.x][cur.y] = true;

        if(cur.x == to.x && cur.y == to.y) {
            break;
        }

        for(int i = 0; i < 4; i++) {
            int x = cur.x + dir[i][0];
            int y = cur.y + dir[i][1];

            if(x < 0 || x >= H || y < 0 || y >= W || visit[x][y] || 'X' == board[x][y]) {
                continue;
            }

            que.push(State(cur.step + 1, x, y));
        }
    }

    return cur.step;
}

void findPossition() {
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            int c = board[i][j];

            if('S' == c) {
                pos[0] = State(0, i, j);
            }

            if(isdigit(c)) {
                pos[c - '0'] = State(0, i, j);
            }
        }
    }
}