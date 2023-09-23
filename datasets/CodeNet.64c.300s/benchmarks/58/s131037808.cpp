#include <iostream>
using namespace std;

#define MAX_W 100
#define MAX_H 100

char room[MAX_W][MAX_H];
int W,H;

const int direc[4][2] = {
    {0, -1},
    {1, 0},
    {0, 1},
    {-1, 0},
};

void dfs(const int& row, const int& col, const char c);

int main() {
    while(cin>>H>>W, W > 0) {
        int step = 0;
        int col, row;
        for (row = 0; row < H; ++row) {
            for (col = 0; col < W; ++col) {
                cin >> room[row][col];
            }
        }
        for (row = 0; row < H; ++ row) {
            for(col = 0; col < W; ++ col) {
                if(room[row][col] != '!') {
                    dfs(row, col, room[row][col]);
                    ++ step;
                }
            }
        }
        cout<<step<<endl;
    }
    return 0;
}

void dfs(const int& row, const int& col, const char c) {
    room[row][col] = '!';
    for(int d = 0; d < 4; ++ d) {
        int curRow = row + direc[d][1];
        int curCol = col + direc[d][0];
        if(curRow >= 0 && curRow < H && curCol >= 0 && curCol < W && room[curRow][curCol] == c) {
            dfs(curRow, curCol, c);
        }
    }
}
