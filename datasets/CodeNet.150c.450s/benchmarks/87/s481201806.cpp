#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int h;
int grid[10][5];

int getPoint() {
    int point = 0;
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < 5; ++x) {
            int cnt = 0;
            int tnt = grid[y][x];
            while (grid[y][x] == tnt && x < 5) {
                cnt++;
                x++;
            }
            x--;
            if (cnt > 2) {
                point += cnt * tnt;
                for (int c = 0; c < cnt; ++c ) {
                    grid[y][x-c] = 0;
                }
            }
        }
    }
    return point;
}

void deleteBlock() {
    for (int x = 0; x < 5; ++x) {
        bool flag = true;
        while (flag) {
            flag = false;
            for (int y = h - 1; y > 0; --y) {
                if (grid[y][x] == 0 && grid[y-1][x] > 0) {
                    swap(grid[y][x], grid[y-1][x]);
                    flag = true;
                }
            }
        }
    }
}

int solve() {
    int point = 0;
    while (1) {
        int tmp = getPoint();
        if (tmp == 0) break;
        point += tmp;
        deleteBlock();
    }
    return point;
}

int main (int argc, char *argv[]) {
    while (cin>>h, h) {
        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < 5; ++x) {
                cin>>grid[y][x];
            }
        }
        cout<<solve()<<endl;
    }
    return 0;
}
