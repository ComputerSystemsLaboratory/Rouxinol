/* AOJ0118 Property Distribution */

#include <iostream>
#include <cstdio>

using namespace std;

#define DIRECTSIZE 4
struct _direct {
    int drow;
    int dcol;
} direct[DIRECTSIZE] =
    {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

const int N = 100;
string grid[N];
int h, w, ans;

void dfs(int row, int col, char c)
{
    if(grid[row][col] == c) {
        grid[row][col] = ' ';

        int nextrow, nextcol;
        for(int i=0; i<DIRECTSIZE; i++) {
            nextrow = row + direct[i].drow;
            nextcol = col + direct[i].dcol;

            if(0 <= nextrow && nextrow < h && 0 <= nextcol && nextcol < w)
                if(grid[nextrow][nextcol] != ' ')
                    dfs(nextrow, nextcol, c);
        }
    }
}

int main()
{    
    while(cin >> h >> w && (h || w)) {
        getchar();
        for(int i=0; i<h; i++)
            getline(cin, grid[i]);

        ans = 0;
        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++) {
                char c = grid[i][j];
                if(c != ' ') {
                    ans++;
                    dfs(i, j, c);
                }
            }

        cout << ans << endl;
    }

    return 0;
}