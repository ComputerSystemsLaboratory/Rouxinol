#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

const int DIRECTSIZE = 4;
struct _direct {
    int drow;
    int dcol;
} direct[DIRECTSIZE] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

const int N = 1000;
const int N2 = 10;
char grid[N][N], visited[N][N];
int h, w, n;
struct _factory {
    int row;
	int col;
} factory[N2];

struct _node {
    int row;
	int col;
	int level;
};

int bfs(int n, char goal) {
    memset(visited, 0, sizeof(visited));
    _node start={factory[n-1].row, factory[n-1].col, 0}, temp;
    visited[start.row][start.col] = 1;
    queue<_node> q;
    q.push(start);
    while(!q.empty()) {
        _node front = q.front();
        q.pop();
        for(int i=0; i<DIRECTSIZE; i++) {
            int nextrow = front.row + direct[i].drow;
            int nextcol = front.col + direct[i].dcol;
            if( 0 <= nextrow && nextrow < h && 0 <= nextcol && nextcol < w) {
                if(grid[nextrow][nextcol] == goal) {
                    return front.level + 1;
                }
				else if(visited[nextrow][nextcol] == 0 && grid[nextrow][nextcol] != 'X') {
                    visited[nextrow][nextcol] = 1;
                    temp.row = nextrow;
                    temp.col = nextcol;
                    temp.level = front.level + 1;
                    q.push(temp);
                }
            }
        }
    }
    return 0;
}

int main() {
    while (~scanf("%d %d %d", &h, &w, &n)){
        for(int i = 0; i < h; i++) {
			scanf("%s", grid[i]);
            for(int j = 0; j < w; j++) {
                if(grid[i][j] == 'S') {
                    factory[0].row = i;
                    factory[0].col = j;
				}
				else if(isdigit(grid[i][j])) {
                    factory[grid[i][j] - '0'].row = i;
                    factory[grid[i][j] - '0'].col = j;
                }
            }
		}
        int minstep = 0;
        char goal = '1';
        for(int i=1; i<=n; i++) {
            minstep += bfs(i, goal);
            goal++;
        }
        printf("%d\n", minstep);
    }
    return 0;
}