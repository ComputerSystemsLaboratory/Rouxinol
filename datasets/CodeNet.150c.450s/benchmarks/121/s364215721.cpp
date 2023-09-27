#include <iostream>  
#include <cstdio>  
using namespace std;  
  
#define N 100  
  
int n, m;  
char tile[N][N+1];  
int number;  
  
void dfs(int x, int y, char c)  
{  
    tile[x][y] = 'X';  
    int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};  
    for (int i = 0; i < 4; i ++) {  
        int nx = x + d[i][0], ny = y + d[i][1];  
        if (0 <= nx && nx < n && 0 <= ny && ny < m  
                && tile[nx][ny] == c) {  
            dfs(nx, ny, c);  
        }  
    }  
}  
  
void solve() {  
    int res = 0;  
    for (int i=0; i<n; i++) {  
        for (int j=0; j<m; j++) {  
            if (tile[i][j] != 'X') {  
                dfs(i, j, tile[i][j]);  
                res ++;  
            }  
        }  
    }  
    printf("%d\n", res);  
}  
  
int main(void)  
{  
    while (cin >> n >> m) {  
        if (!m && !n)  
            break;  
  
        for (int i=0; i<n; i++) {  
            cin >> tile[i];  
        }  
  
        solve();  
    }  
  
    return 0;  
}  

