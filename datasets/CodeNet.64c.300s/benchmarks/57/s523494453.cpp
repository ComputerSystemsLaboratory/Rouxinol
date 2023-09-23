/*
 * 题目: Aizu - 0525 
 * 题意: 
 * 类型: 
 * 算法：暴力搜索
 * Date: 2020-07-07 09:37:58
 * LastEditors: loeije
 * LastEditTime: 2020-07-08 07:01:33
*/

#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1024 + 10;
const int row = 10 + 5, col = 10000 + 5;
int grid[row][col];
int r, c, ans = 0;

void process(int idx) {
    if(idx == r) {
        int sum = 0;
        for(int i = 0; i < c; ++i) {
            int tempsum = 0;
            for(int j = 0; j < r; ++j) {
                if(grid[j][i] == 1) {
                    tempsum++;
                }
            }

            sum += max(tempsum, r - tempsum);
        }
        ans = max(ans, sum);
        return ;
    }

    process(idx + 1);
    for(int i = 0; i < c; ++i) grid[idx][i] = !grid[idx][i];
    process(idx + 1);
}

int main() {
    while(scanf("%d%d", &r, &c) && (r + c != 0)) {
        for(int i = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j) {
               scanf("%d", &grid[i][j]); 
            }
        }

        // process
        ans = 0;
        process(0);
        
        printf("%d\n", ans);
    }
    return 0;
}
