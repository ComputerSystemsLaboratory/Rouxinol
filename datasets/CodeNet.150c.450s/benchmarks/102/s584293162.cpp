#include <iostream>
#include <vector>
using namespace std;
void move(const vector<vector<char>> &board, vector<vector<bool>> &reached, int x, int y, int w, int h) {
    if (x < 0 || w <= x || y < 0 || h <= y) {
        return;
    } else if (board[x][y] == '#') {
        return;
    } else if (reached[x][y]) {
        return;
    }
    reached[x][y] = true;
    int dxAry[] = {0, 1, 0, -1};
    int dyAry[] = {-1, 0, 1, 0};
    for (int i = 0; i < 4; ++i) {
        move(board, reached, x + dxAry[i], y + dyAry[i], w, h);
    }
}
int main(void){
    int w, h;
    while (cin >> w >> h && w && h) {
        vector<vector<char>> board(w, vector<char>(h));
        int sx, sy;
        for (int i = 0; i < h; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < row.length(); ++j) {
                board[j][i] = row[j];
                if (row[j] == '@') {
                    sx = j;
                    sy = i;
                }
            }
        }
        vector<vector<bool>> reached(w, vector<bool>(h, false));
        move(board, reached, sx, sy, w, h);
        int count = 0;
        for (int y = 0; y < h; ++y)
            for (int x = 0; x < w; ++x)
                count += reached[x][y];
        cout << count << endl;
    }
    return 0;
}