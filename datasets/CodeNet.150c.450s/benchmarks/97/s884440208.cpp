#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

constexpr int MAX = 200;
bool grid[2 * MAX][2 * MAX];

struct Cor {
    // constructer
    Cor(int x, int y) : x_(x), y_(y) {}

    // field
    int x_;
    int y_;
};

int check_x(int x, int y) {
    int count = 0;
    int empty_count = 0;
    for (int xx = x; xx < 2 * MAX; ++xx) {
        if (grid[y][xx] == true) {
            count = xx;
        }
    }
    return count - x;
}

int check_y(int x, int y) {
    int count = 0;
    for (int yy = y; yy < 2 * MAX; ++yy) {
        if (grid[yy][x] == true) {
            count = yy;
        }
    }
    return count - y;
}

int main (int argc, char *argv[]) {
    int N, n, d;
    vector<Cor> cs;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};
    
    // input
    while (cin>>N, N) {
        // init
        for (int i = 0; i < 2 * MAX; ++i) {
            for (int j = 0; j < 2 * MAX; ++j) {
                grid[i][j] = false;
            }
        }

        // cout<<"---solve---"<<endl;
        //solve
        grid[200][200] = true;
        cs.push_back(Cor(200, 200));
        for (int i = 0; i < N-1; ++i) {
            cin>>n>>d;
            int nx = cs[n].x_ + dx[d];
            int ny = cs[n].y_ + dy[d];
            grid[ny][nx] = true;
            cs.push_back(Cor(nx, ny));
        }

        // print
        // for (int i = 180; i < 1.2 * MAX; ++i) {
        //     for (int j = 180; j < 1.2 * MAX; ++j) {
        //        cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;

        // ans
        int max_x = 200;
        int min_x = 200;
        int max_y = 200;
        int min_y = 200;
        // cout<<"--check---"<<endl;
        // check x
        for (int y = 0; y < 2 * MAX; ++y) {
            for (int x = 0; x < 2 * MAX; ++x) {
                if (grid[y][x] == true) {
                    max_x = max(max_x, x);
                    min_x = min(min_x, x);
                    max_y = max(max_y, y);
                    min_y = min(min_y, y);
                }
            }
        }
        // // check y
        // for (int x = 0; x < 2 * MAX; ++x) {
        //     for (int y = 0; y < 2 * MAX; ++y) {
        //         if (grid[y][x] == true) {
        //             int tmp = check_y(x, y);
        //             y += tmp;
        //             max_y = max(max_y, tmp);
        //         }
        //     }
        // }

        // ans
        // cout<<"---ans---"<<endl;
        cout<<max_x - min_x + 1<<" "<<max_y - min_y + 1<<endl;

        // clear
        cs.clear();
    }


    return 0;
}