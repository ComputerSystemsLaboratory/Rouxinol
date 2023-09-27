#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <complex>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <functional>
#include <bitset>
#include <tuple>

using namespace std;

typedef long long ll;

int H;
const int W = 5;

int Dfs(int y, int x, int c, vector<vector<int>> &board) {
    if (x >= W || board[y][x] != c)
        return 0;
    return Dfs(y, x + 1, c, board) + 1;
}

int main()
{
    while (cin >> H, H) {
        vector<vector<int>> board(H, vector<int>(W, 0));

        for (int i = 0; i < H; ++i)
            for (int j = 0; j < W; ++j)
                cin >> board[i][j];

        int ans = 0;
        bool change = true;

        while (change) {
            change = false;

            for (int i = 0; i < H; ++i) {
                for (int j = 0; j < W; ++j) {
                    if (board[i][j] == 0)
                        continue;
                    int cnt = Dfs(i, j, board[i][j], board);
                    if (cnt >= 3) {
                        ans += cnt * board[i][j];
                        for (int k = 0; k < cnt; ++k)
                            board[i][j + k] = 0;
                        change = true;
                    }
                }
            }

            if (!change)
                break;

            for (int j = 0; j < W; ++j) {
                for (int i = H - 1; i >= 0; --i) {
                    if (board[i][j] == 0) {
                        int k = i - 1;
                        while (k >= 0 && board[k][j] == 0)
                            --k;
                        if (k < 0)
                            break;
                        swap(board[i][j], board[k][j]);
                    }
                }
            }
        }

        cout << ans << endl;
    }


    return 0;
}