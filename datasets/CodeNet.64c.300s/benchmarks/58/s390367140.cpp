#include <cstdio>

using namespace std;

int M, N;
const int MAXLEN = 100;
char garden[MAXLEN+1][MAXLEN+1];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int cnt;

void dfs(int m, int n, char type)
{
    if (m < 0 || m >= M || n < 0 || n >= N) return;
    if (garden[m][n] != type) return;
    garden[m][n] = '!';
    for (int i = 0; i < 4; i++) {
        dfs(m+dx[i], n+dy[i], type);
    }
}

int main()
{
    while(1) {
        scanf("%d%d", &M, &N);
        if (M == 0) break;
        for (int i = 0; i < M; i++) {
            getchar();
            for (int j = 0; j < N; j++) {
                scanf("%c", &garden[i][j]);
            }
        }
        cnt = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (garden[i][j] != '!') {
                    dfs(i, j, garden[i][j]);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}