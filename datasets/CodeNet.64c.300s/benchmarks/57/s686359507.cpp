#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int ROW_MAX = 10;
const int COL_MAX = 10000;
int col_cnt[COL_MAX];
int mat[ROW_MAX][COL_MAX];
int r, c;
int result;

void dfs(int row_id, bool flip) {
    if (row_id == r) {
        int res = 0;
        for (int i = 0; i < c; i++) {
            res += max(col_cnt[i], r-col_cnt[i]);
        }
        result = max(result, res);
        return;
    }
    if (flip) {
        for (int i = 0; i < c; i++) {
            if (mat[row_id][i]) {
                mat[row_id][i] = 0;
                col_cnt[i]--;
            } else {
                mat[row_id][i] = 1;
                col_cnt[i]++;
            }
        }
    }
    dfs(row_id+1, false);
    dfs(row_id+1, true);
    if (flip) {
        for (int i = 0; i < c; i++) {
            if (mat[row_id][i]) {
                mat[row_id][i] = 0;
                col_cnt[i]--;
            } else {
                mat[row_id][i] = 1;
                col_cnt[i]++;
            }
        }
    }
}

int main() {
    while (1) {
        scanf("%d%d", &r, &c);
        if (!r) break;
        memset(col_cnt, 0, COL_MAX*sizeof(int));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                if (mat[i][j]) {
                    col_cnt[j]++;
                }
            }
        }
        result = 0;
        dfs(0, false);
        dfs(0, true);
        printf("%d\n", result);
    }
    return 0;
}