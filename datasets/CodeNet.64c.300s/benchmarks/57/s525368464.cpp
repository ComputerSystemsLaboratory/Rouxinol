#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define MAXH 11
#define MAXW 10000
int H, W;
int field[MAXH][MAXW];
int main(void) {
    while (1) {
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        for (int i = 0; i < H; i++)
            for (int j = 0; j < W; j++)
                cin >> field[i][j];
        int p = 1, ret = 0;
        for (int i = 0; i < H; i++) p *= 2;
        for (int i = 0; i < p; i++) {
            int table[H][W];
            for (int k = 0; k < H; k++)
                for (int j = 0; j < W; j++)
                    table[k][j] = field[k][j];
            for (int j = 0; j < H; j++) {
                if (((i >> j) % 2) == 1) {
                    for (int k = 0; k < W; k++) {
                        table[j][k] = 1-table[j][k];
                    }
                }
            }
            int ans = 0;
            for (int j = 0; j < W; j++) {
                int num0 = 0;
                for (int k = 0; k < H; k++) {
                    if (table[k][j] == 0) num0++;
                }
                ans += max(H-num0, num0);
            }
            ret = max(ret, ans);
        }
        cout << ret << endl;
    }
    return 0;
}