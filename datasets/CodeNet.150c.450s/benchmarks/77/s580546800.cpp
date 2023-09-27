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
#include <climits>
using namespace std;
#define INF 100000000
#define MAX 32

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int n, m;

bool exist[MAX][MAX];

int main(void) {
    while (cin >> n) {
        if (n == 0) break;
        for (int i = 0; i <= 20; i++) {
            for (int j = 0; j <= 20; j++) {
                exist[i][j] = false;
            }
        }
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            exist[y][x] = true;
        }
        int nowx = 10;
        int nowy = 10;
        cin >> m;
        for (int i = 0; i < m; i++) {
            //printf("now pos (%d %d)\n", nowx, nowy);
            char d;
            int l;
            cin >> d >> l;
            if (exist[nowy][nowx]) exist[nowy][nowx] = false;
            if (d == 'N') {
                for (int j = 0; j < l; j++) {
                    nowy++;
                    if (exist[nowy][nowx]) exist[nowy][nowx] = false;
                }
            }
            if (d == 'S') {
                for (int j = 0; j < l; j++) {
                    nowy--;
                    if (exist[nowy][nowx]) exist[nowy][nowx] = false;
                }
            }
            if (d == 'E') {
                for (int j = 0; j < l; j++) {
                    nowx++;
                    if (exist[nowy][nowx]) exist[nowy][nowx] = false;
                }
            }
            if (d == 'W') {
                for (int j = 0; j < l; j++) {
                    nowx--;
                    if (exist[nowy][nowx]) exist[nowy][nowx] = false;
                }
            }
        }
        if (exist[nowy][nowx]) exist[nowy][nowx] = false;
        bool ok = true;
        for (int y = 0; y <= 20; y++) {
            for (int x = 0; x <= 20; x++) {
                if (exist[y][x]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }
        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}