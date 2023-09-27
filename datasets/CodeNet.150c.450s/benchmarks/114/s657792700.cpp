// ALDS1_12_A.cpp
// Graph II - Minimum Spanning Tree
#include <iostream>
using namespace std;

const int maxN = 100;
const int INF = 2001;
int w[maxN][maxN];
int color[maxN];
int n;
static const int WHITE = 0;
static const int BLACK = 1;

int prim(int x)
{
    int res = 0;
    int cnt = 1;
    color[x] = BLACK;
    while (cnt++ != n) {
        int minCost = INF;
        int pos = 0; // ??°?????°?????????
        for (int i = 0; i < n; i++) {
            if (color[i] != BLACK) continue;
            for (int j = 0; j < n; j++) {
                if (color[j] != WHITE) continue;
                if (w[i][j] < minCost) {
                    pos = j;
                    minCost = w[i][j];
                }
            }
        }
        res += minCost;
        color[pos] = BLACK;
    }
    return res;
}

int main()
{
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num;
            if (num == -1) w[i][j] = INF;
            else w[i][j] = num;
        }
    }
    cout << prim(0) << endl;
    return 0;
}