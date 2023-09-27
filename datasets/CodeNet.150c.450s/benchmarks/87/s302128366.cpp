#include <bits/stdc++.h>
typedef std::vector<int>  VI;

int H;
std::vector< VI > board(10, VI(5, -1));

int erase() {
    int i, j, k, x;
    int score = 0;
    for(i = 0; i < H; ++i) {
        for(j = 0; j < 3; ++j) {
            k = j + 1;
            x = board[i][j];
            if(x == -1) continue;
            while(k < 5 && board[i][k] == x) ++k;
            --k;
            if(k - j >= 2) {
                score += (k - j + 1) * x;
                while(k >= j) {
                    board[i][k] = -1;
                    --k;
                }
            }
        }
    }
    return score;
}

bool update() {
    int i, j, k;
    bool isUpdate = false;;
    for(j = 0; j < 5; ++j) {
        for(i = H-1; i >= 0; --i) {
            if(board[i][j] == -1 || i == H-1 || board[i+1][j] != -1) continue;
            k = i+1;
            while(k < H && board[k][j] == -1) {
                isUpdate = true;
                board[k][j] = board[k-1][j];
                board[k-1][j] = -1;
                ++k;
            }
        }
    }
    return isUpdate;
}

int main() {
    int i, j;
    int score = 0;
    while(std::cin >> H, H != 0) {
        for(i = 0; i < H; ++i) {
            for(j = 0; j < 5; ++j) {
                std::cin >> board[i][j];
            }
        }
       
       score = 0;
        do {
            score += erase();
        } while(update());

        std::cout << score << std::endl;
    }
}
