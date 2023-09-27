#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> PIII;

int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(VVI &table, int i, int j) {
    table[i][j] = 0;
    for (int loop = 0; loop < 8; loop++) {
        int new_i = i + dy[loop];
        int new_j = j + dx[loop];
        if (table[new_i][new_j] == 1) {
            dfs(table, new_i, new_j);
        }
    }
    return;
}

int main(void) {
    while(true) {
        int w;
        int h;
        cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }
        VVI table(h + 2, VI(w + 2, 0));
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                cin >> table[i][j];
            }
        }
        int number = 0;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if (table[i][j] == 1) {
                    dfs(table, i, j);
                    number++;
                }
            }
        }
        cout << number << endl;
    }
    return 0;
}