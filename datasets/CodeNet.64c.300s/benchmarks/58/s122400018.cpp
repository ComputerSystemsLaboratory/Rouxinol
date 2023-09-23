#include <iostream>

using namespace std;

const int MAX_X = 100, MAX_Y = 100;
char field[MAX_X+5][MAX_Y+5];

int size_x, size_y;

int dfs(int x, int y, char fruit) {
    // check size_x and size_y
    if(x < 0 || x >= size_x || y < 0 || y >= size_y) return 0;

    // check whether the first visit or not
    if(field[x][y] == '.') return 0;

    // check whether same fruit or not
    if(field[x][y] == fruit) {
        field[x][y] = '.';
        dfs(x+1, y, fruit);
        dfs(x, y+1, fruit);
        dfs(x-1, y, fruit);
        dfs(x, y-1, fruit);
    }

    return 0;
}

int solve(int size_x, int size_y) {
    // input
    for(int i = 0; i < size_x; i++) {
        cin >> field[i];
    }

    // Depth-First Search
    int ans = 0;
    for(int i = 0; i < size_x; i++) {
        for(int j = 0; j < size_y; j++) {
            char fruit = field[i][j];
            if(fruit != '.') {
                dfs(i, j, fruit);
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

int main() {
    while(true) {
        // solve for each data set
        cin >> size_x >> size_y;
        if(size_x == 0 && size_y == 0) break;
        solve(size_x, size_y);
    }
    return 0;
}